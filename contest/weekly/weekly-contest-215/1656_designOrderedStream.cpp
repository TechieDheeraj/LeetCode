/**
 *      file    :  1656_designOrderedStream.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 16 13:52:26
 *      lastMod :  Mon Nov 16 13:52:26 2020
**/

class OrderedStream {
public:
    int ptr = 1;
    vector<string>vals;
    OrderedStream(int n) {
      vals.resize(n+1, "");
    }

    vector<string> insert(int id, string value) {

      vector<string>result;
      vals[id] = value;

      if(ptr != id)
        return {};

      for (int i = id; i < vals.size(); ++i) {

         //cout << "pointer " << ptr  << vals[i]<< endl;
        if (vals[i] == "")
          return result;
        else
          result.push_back(vals[i]);

        ++ptr;

      }
      return result;

    }
};
