/**
 *      file    :  189_RotateArray.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jun 05 22:28:50 
 *      lastMod :  Sat Jun  5 22:28:50 2021 
 **/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

// SOLUTION 1:

/*
      int n = nums.size();
      k %= n;
      int count = 0;

      for (int i = 0; count < n; ++i) {
        int cur = i;
        int prev = nums[i];

        do {
          int next = (cur + k) % n;
          int temp = nums[next];
          nums[next] = prev;
          prev = temp;
          cur = next;
          count++;
        } while(i != cur);
      }
      */

// Solution 2
      int n = nums.size();
      k%=n;
      reverse(nums, 0, n-1); // reverse complete array
      reverse(nums, 0, k-1); // reversing first k elements of array
      reverse(nums, k, n-1); // reversing last n-k elements of array
    }
  void reverse(vector<int>& nums, int start, int end) {
    while(start < end) {
      nums[start] ^= nums[end];
      nums[end] ^= nums[start];
      nums[start] ^= nums[end];
      start++;
      end--;
    }
  }
};
