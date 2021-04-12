/**
 *      file    :  1736_LatestTimeByReplacingHiddenDigits.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Apr 13 00:10:07 
 *      lastMod :  Tue Apr 13 00:10:07 2021 
 **/

class Solution {
public:
    string maximumTime(string time) {

      time[0] = time[0] != '?' ? time[0] : (time[1] == '?' || time[1] <= '3') ? '2' : '1';
      time[1] = time[1] != '?' ? time[1] : (time[0] == '2') ? '3' : '9';
      time[3] = time[3] != '?' ? time[3] : '5';
      time[4] = time[4] != '?' ? time[4] : '9';

      return time;
      /*
      string del = ":";
      string token = "";
      int pos = 0;
      vector<string>times;
      string result;

      while((pos = time.find(del)) != std::string::npos) {
        token = time.substr(0, pos);
        times.push_back(token);
        time.erase(0, pos+del.length());
      }
      times.push_back(time);

      for(int i =0 ; i < times.size(); ++i) {
        char f = times[i][0];
        char s = times[i][1];

        if (i == 0) {
          if (f == '?')
            f = '2';
          if (s == '?' && f == '2')
            s = '3';
          else if (s == '?' && f != '2')
            s = '9';
        } else {
          if (f == '?')
            f = '5';
          if (s == '?')
            s = '9';
        }
        result += f;
        result += s;
        if (i == 0)
          result += ':';
      }
      return result;
    */
    }
};
