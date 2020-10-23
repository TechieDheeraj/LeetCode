/**
 *      file    :  1200_MinAbsoluteDiff.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 24 02:15:58
 *      lastMod :  Sat Oct 24 02:15:58 2020
**/

class Solution {
public:
  /*
  time: 212ms
  space: 32.4

    bool search(vector<int> &arr, int elem) {

      int l = 0;
      int r = arr.size()-1;
      int mid = 0;

      while(r>=l) {
        mid= l + (r-l)/2;
        if (arr[mid] == elem)
          return true;
        if(elem < arr[mid])
          r = mid-1;
        else
          l = mid+1;
      }
      return false;
    }

    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

      int size = arr.size();

      vector<vector<int>> result;

      sort(arr.begin(), arr.end());

      if (size <= 1)
        return {};

      int mine = INT_MAX;

      int l = 0;
      int m = 1;
      while(l < m && m < size) {
        int diff = abs(arr[l] - arr[m]);
        mine = min(mine, diff );
        l++; m++;
      }

      for (auto i : arr) {
        //int elem = abs(i + mine);
        int elem = i + mine;
        if (search(arr, elem)) {
          if (elem > i)
            result.push_back({i, elem});
          else
            result.push_back({elem, i});
        }
      }
      */
  /* time: 184ms, space : 32.6MB
  */
     vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

      int size = arr.size();
      vector<vector<int>> result;
      sort(arr.begin(), arr.end());

      if (size <= 1)
        return {};

      int mine = INT_MAX;
      int l = 0;
      int m = 1;
      while(l < m && m < size) {
        int diff = abs(arr[l] - arr[m]);
        mine = min(mine, diff );
        l++; m++;
      }
      for (int i =0 ; i < size; ++i ) {
        for (int j = i+1; j < size; ++j) {
          int diff = arr[j]-arr[i];
          diff = abs(diff);
          if (diff == mine) {
            if (arr[i] > arr[j])
              result.push_back({arr[j], arr[i]});
            else
              result.push_back({arr[i], arr[j]});
            break;
          }
          else if (diff > mine)
            break;
        }
      }
      sort(result.begin(), result.end());

      return result;
    }
};
