/**
 *      file    :  1395_countNumberOfTeams.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jul 11 11:49:08 
 *      lastMod :  Sun 11 Jul 11:49:08 2021 
 **/

class Solution {
  public:
  /* Got caught up in TLE as this is bruteforce solution */
  /*
    int numTeams(vector<int>& rating) {
      int c = 0;
      int n = rating.size();
      for(int i = 0;i <n-2; ++i) {
        for(int j = i+1;j <n-1; ++j) {
          if (rating[i] == rating[j])
            continue;
          for(int k= j+1;k <n; ++k) {
            if ((rating[i] > rating[j] && rating[j] > rating[k]) || (rating[i] < rating[j] && rating[j] < rating[k]))
              c++;
          }
        }
      }
      return c;
    }
    */
  /*
      This is not a known formula but you can come up with it.
      Here we are trying to find left smaller, left larger, right smaller, right larger elements for the current element by considering it to be the part of the team already which should be of size 3.
      so now we just need 2 more members and let us consider the case of decreasing subarray.
      we need to select 1 left smaller element and 1 right larger element to make a team of size 3. assume there are n smaller elements in the left of the current element and m larger elements to the right,
      so by the concept of combinations, it will be nC1x mC1=n x m,
      similarly, for the case of an increasing array.
      this is the reason why we are multiplying the number of elements.
      0
*/

  int numTeams(vector<int>& rating) {
    int c = 0;
    int n = rating.size();

    for (int i = 1;i <= n-2; ++i) {
      int leftSmaller = 0, leftLarger = 0;
      int rightSmaller = 0, rightLarger = 0;

      for (int j = 0; j < i; ++j) {
        if (rating[j] < rating[i])
          leftSmaller++;
        else if (rating[j] > rating[i])
          leftLarger++;
      }

      for (int k = i+1; k < n; ++k) {
        if (rating[k] > rating[i])
          rightLarger++;
        else if (rating[k] < rating[i])
          rightSmaller++;
      }
      c+= leftSmaller*rightLarger + leftLarger * rightSmaller;
    }
    return c;
  }
};
