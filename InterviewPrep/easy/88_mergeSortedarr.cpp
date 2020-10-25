/**
 *      file    :  88_mergeSortedarr.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 25 12:32:46
 *      lastMod :  Sun Oct 25 12:32:46 2020
**/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

      int i=m-1,j=n-1,k=m+n-1;

        while(i>=0&&j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i];
                i--;
                k--;
            }
            else
            {
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
        while(j>=0)
            nums1[k--]=nums2[j--];
    }


/*    void addAndShift(vector<int>& arr, int elem, int idx, int size) {

      int i = idx;

      while(i < size) {
        if (size-i >1 ) {
          arr[i+1] = arr[i];
          ++i;
        }
        else {
          break;
        }
      }
      arr[idx] = elem;
    }

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

      int i = 0;
      int j = 0;

      if (n == 0)
        return;
      if (m == 0) {
        for (int k = 0; k < nums2.size(); ++k)
          nums1[k] = nums2[k];
        return;
      }

      for (i = 0; i<m || j < n; ++i) {
        if (nums2[j] < nums1[i]) { // then shift to right
          addAndShift(nums1,nums2[j], i, m);
          ++j;
        }
        else if (i >= m && nums1[i] == 0) {
          addAndShift(nums1,nums2[j], i, nums1.size());
          ++j;
        }
      }
      }
      */
};
