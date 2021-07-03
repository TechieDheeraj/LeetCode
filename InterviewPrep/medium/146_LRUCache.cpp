/**
 *      file    :  146_LRUCache.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Jul 03 17:37:47 
 *      lastMod :  Sat  3 Jul 17:37:47 2021 
 **/

class LRUCache {
public:
    int size;
    unordered_map<int, list<pair<int, int>>::iterator>hm;
    list<pair<int, int>>ls;
    LRUCache(int capacity) {
      this->size = capacity;
    }

    int get(int key) {
      int res = -1;
      if (hm.find(key) != hm.end()) {
        auto tmp = *hm[key];
        ls.erase(hm[key]);
        ls.push_front(tmp);
        hm[key] = ls.begin();
        res = tmp.second;
      }
      return res;
    }

    void put(int key, int value) {
      auto it = hm.find(key);
      if (it != hm.end()) {
        ls.erase(it->second);
        ls.push_front(make_pair(key, value));
        hm[key] = ls.begin();

      } else if(ls.size() == this->size) {
          auto t = ls.end();
          t--;
          auto pa = *t;
//          cout << "iterator " << &(*hm[val]) << endl;
          auto it = hm.find(pa.first);
          hm.erase(it);

        /*
          for (auto &k: hm) {
            //if (&(*k.second) == &(*t)) {
            if (k.second == t) {
              hm.erase(k.first);
              break;
            }
          }
          */

          ls.pop_back();
          ls.push_front(make_pair(key, value));
          hm[key] = ls.begin();
      } else {
        ls.push_front(make_pair(key, value));
        hm[key] = ls.begin();
      }
    }
};
