/**
 *      file    :  1496_PathCrossing.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 14 23:58:58
 *      lastMod :  Mon Dec 14 23:58:58 2020
 **/

struct pair_hash
{
    template <class T1, class T2>
    std::size_t operator () (std::pair<T1, T2> const &pair) const
    {
        std::size_t h1 = std::hash<T1>()(pair.first);
        std::size_t h2 = std::hash<T2>()(pair.second);

        return h1 ^ h2;
    }
};
class Solution {
public:
    bool isPathCrossing(string& path) {
      uint8_t x= 0;
      uint8_t y= 0;
      unordered_set<std::pair<uint8_t,uint8_t>, pair_hash> hs;

      hs.insert({x, y});

      for (char j:path) {
        if (j == 'N')
          y+=1;
        else if (j == 'E')
          x+=1;
        else if (j == 'S')
          y-=1;
        else
          x-=1;

        auto t = make_pair(x,y);
        if (hs.find(t) != hs.end())
          return true;
        hs.insert(t);
      }
        return false;
    }
};
