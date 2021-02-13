/**
 *      file    :  676_ImplementMagicDictionary.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Feb 13 23:40:59 
 *      lastMod :  Sat Feb 13 23:40:59 2021 
 **/

// Solution 1
#define ALPHABETS 26
class MagicDictionary {
public:
    /** Initialize your data structure here. */
    bool isEow;
    unordered_map<char, MagicDictionary*>children;

    MagicDictionary() {
      this->isEow = false;
    }

    void insert(string& word) {
      MagicDictionary* pcrawl = this;

      for (int i = 0; i < word.length(); ++i) {
        if (pcrawl->children.find(word[i]) == pcrawl->children.end())
          pcrawl->children[word[i]] = new MagicDictionary();

        pcrawl=pcrawl->children[word[i]];
      }
      pcrawl->isEow = true;
    }

    void buildDict(vector<string> dictionary) {
      for (auto&i : dictionary)
        this->insert(i);
    }

    bool found(string& word) {
      MagicDictionary* pcrawl = this;

      for (int i =0; i < word.length(); ++i) {
        if (pcrawl->children.find(word[i]) == pcrawl->children.end())
          return false;
        pcrawl = pcrawl->children[word[i]];
      }
      return pcrawl && pcrawl->isEow;
    }

    bool search(string searchWord) {
      MagicDictionary* pcrawl = this;

      for (int i = 0; i < searchWord.length(); ++i) {
        char ch = searchWord[i];
          for (char cha = 'a'; cha <= 'z'; ++cha) {
            if (ch == cha) continue;
            searchWord[i] = cha;
            if (found(searchWord))
              return true;
          }
          searchWord[i] = ch;
      }
      return false;
    }
};

// Solution 2

#define ALPHABETS 26
class MagicDictionary {
public:
  /** Initialize your data structure here. */
  bool isEow;
  MagicDictionary*children[ALPHABETS];

  MagicDictionary() {
    this->isEow = false;
    for (int i = 0; i < ALPHABETS; ++i)
      this->children[i] = nullptr;
  }
  
  void insert(string& word) {
    MagicDictionary* pcrawl = this;
    
    for (int i = 0; i < word.length(); ++i) {
      if (!pcrawl->children[word[i]-'a'])
        pcrawl->children[word[i]-'a'] = new MagicDictionary();
      
      pcrawl=pcrawl->children[word[i]-'a'];
    }
    pcrawl->isEow = true;
  }

  void buildDict(vector<string> dictionary) {
    for (auto&i : dictionary)
      this->insert(i);
  }
  
  bool found(string& word) {
    MagicDictionary* pcrawl = this;
    
    for (int i =0; i < word.length(); ++i) {
      if (!pcrawl->children[word[i]-'a'])
        return false;
      pcrawl = pcrawl->children[word[i]-'a'];
    }
    return pcrawl && pcrawl->isEow;
  }

  bool search(string searchWord) {
    MagicDictionary* pcrawl = this;
    
    for (int i = 0; i < searchWord.length(); ++i) {
      char ch = searchWord[i];
        for (char cha = 'a'; cha <= 'z'; ++cha) {
          if (ch == cha) continue;
          searchWord[i] = cha;
          if (found(searchWord))
            return true;
        }
        searchWord[i] = ch;
    }
    return false;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */
