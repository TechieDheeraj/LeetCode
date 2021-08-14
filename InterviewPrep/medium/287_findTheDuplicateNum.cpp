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

// Solutions

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      // n^2

      /*
      for (int i =0;i < nums.size()-1; ++i) {
        for (int j =i+1;j < nums.size(); ++j) {
          if (nums[i] == nums[j])
            return nums[i];
        }
      }
      return -1;
      */

      // O(n) SC: O(n)
      /*
      unordered_set<int>hs;
      for (int i =0; i< nums.size(); ++i) {
        if (hs.find(nums[i]) != hs.end())
          return nums[i];
        hs.insert(nums[i]);
      }
      return -1;
      */

      // [1, 3, 4, 2, 2] -> [1, n] -> indexes [0, n-1]

      // O(n)
      /*
      for (int i =0;i < nums.size(); ++i) {
        if (nums[abs(nums[i])] < 0)
          return abs(nums[i]);

        nums[abs(nums[i])] *= -1;
      }
      return -1;
      */
      /*
      int n = nums.size()-1;
      int s = (n * (n+1)) /2;

      int sum = 0;
      for (auto &i : nums)
        sum+=i;
      return abs(s-sum);
      */

      // set bits of integer and if the bit is already set that means num is duplicate
      /* only work if n <= 31
      int seen = 0;
      for (auto&i: nums) {
        if (seen & (1 << i))
          return i;
        seen |= 1 << i;
      }
      return -1;
      */


      if (nums.size() > 1) {
        int slow = nums[0];
        int fast = nums[nums[0]];

        while(slow != fast) {
          slow=nums[slow];
          fast=nums[nums[fast]];
        }
        fast = 0;
        while(slow != fast) {
          slow = nums[slow];
          fast = nums[fast];
        }
        return slow;
      }
      return -1;
    }
};
