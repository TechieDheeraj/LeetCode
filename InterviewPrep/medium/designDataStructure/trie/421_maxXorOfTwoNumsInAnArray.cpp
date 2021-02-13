/**
 *      file    :  421_maxXorOfTwoNumsInAnArray.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Feb 13 19:42:44 
 *      lastMod :  Sat Feb 13 19:42:44 2021 
 **/

//Refer: https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/discuss/849273/C%2B%2B-Trie-implementation-oror-Editorial-Links-%2B-Trie-Implementation-oror-Beginner
//
//https://leetcode.com/discuss/general-discussion/680706/Article-on-Trie.-General-Template-and-List-of-problems.
//
// https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/discuss/91046/How-do-you-even-think-of-getting-an-O(n)-solution-for-this/197770

#define bits 2
class Trie {
  public:
    bool isEow;
    Trie* children[bits]; // data either is 0 or 1

    Trie() {
      this->isEow = false;
      for (int i =0 ; i < bits; ++i)
        this->children[i] = nullptr;
    }

    void insert(string data) {
      Trie* pcrawl = this;

      for (int i=0; i < data.length(); ++i) {
        if (!pcrawl->children[data[i]-'0'])
          pcrawl->children[data[i]-'0'] = new Trie;
        pcrawl = pcrawl->children[data[i]-'0'];
      }
      pcrawl->isEow = true;
    }

    int search(string word) {
      Trie* pcrawl = this;
      int xorResult = 0;

      for (int i = 0; i < word.length(); ++i) {
        if (!pcrawl->children[word[i]-'0']) {
          xorResult *= 2;
          pcrawl = pcrawl->children[!(word[i]-'0')];
        }
        else {
          xorResult*=2;
          xorResult+=1;
          pcrawl = pcrawl->children[word[i]-'0'];
        }
      }
      return xorResult;
    }
};
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
      // To find the number of bits .. source: binary algorithm
      Trie* root = new Trie();
      int n = nums.size();
      if (n == 1) return 0;
      if (n == 2) return nums[0] ^ nums[1];
      int ans = INT_MIN;
      vector<string>complements(n);
      int max_level = (int)(1+log2(*max_element(nums.begin(), nums.end())));
      for (int i= 0; i < n; ++i) {
        int tmp = nums[i];
        string no = "";
        string cmpl = "";
        int cnt = 0;
        while (tmp != 0 || cnt != max_level) {
          int ld = tmp%2;
          no+= (ld == 1 ? "1" : "0");
          cmpl += (ld == 1 ? "0" : "1");
          cnt++;
          tmp/=2;
        }
        reverse(no.begin(), no.end());
        reverse(cmpl.begin(), cmpl.end());
        complements[i] = cmpl;
        root->insert(no);
      }

      for (auto&i : complements)
        ans = max(ans, root->search(i));

      return ans;
    }
};
