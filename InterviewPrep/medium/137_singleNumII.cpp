/**
 *      file    :  137_singleNumII.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Feb 07 23:16:12 
 *      lastMod :  Sun Feb  7 23:16:12 2021 
 **/
class Solution {
public:
    int singleNumber(vector<int>& nums) {

      int seenonce = 0;
      int seentwice = 0;

      for (auto&i : nums) {
        seenonce = ~seentwice & (seenonce ^ i);
        seentwice = ~seenonce & (seentwice ^ i);
      }
      return seenonce;
    }
};
