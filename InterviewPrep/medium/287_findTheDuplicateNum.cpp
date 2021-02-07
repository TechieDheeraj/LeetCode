/**
 *      file    :  287_findTheDuplicateNum.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Feb 07 19:36:12 
 *      lastMod :  Sun Feb  7 19:36:12 2021 
 **/
class Solution {
public:
    void merge(vector<int>& nums, int l, int m, int r) {
      int n1 = m-l+1;
      int n2 = r-m;

      vector<int>left(n1);
      vector<int>right(n2);

      for (int i = 0; i < n1; ++i)
        left[i] = nums[l+i];

      for (int i = 0; i < n2; ++i)
        right[i] = nums[m+i+1];

      int i =0, j = 0, k = l;

      while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
          nums[k] = left[i];
          ++i;
        }
        else {
          nums[k] = right[j];
          ++j;
        }
        ++k;
      }

      while (i < n1) {
        nums[k] = left[i];
        ++i;
        ++k;
      }
      while (j < n2) {
        nums[k] = right[j];
        ++j;
        ++k;
      }
    }

    void mergeSort(vector<int>& nums, int l, int r) {
      if (l >= r)
        return;
      int m = l + (r-l)/2;
      mergeSort(nums, l, m);
      mergeSort(nums, m+1, r);
      merge(nums, l, m, r);
    }

    int findDuplicate(vector<int>& nums) {
      int l = 0;
      int r = nums.size()-1;
      /*
      cout << "Before sorting " << endl;
      for (auto& i: nums)
        cout << i << ", ";
      cout << "\n";
      */
      mergeSort(nums, l, r);
      /*
      cout << "After sorting " << endl;
      for (auto& i: nums)
        cout << i << ", ";
      cout << "\n";
      */

      for (int i = 0; i < r; ++i) {
        if (nums[i] == nums[i+1])
          return nums[i];
      }
      return -1;
    }
};
