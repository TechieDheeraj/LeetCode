/**
 *      file    :  211_designAndAddSearchWordDS.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Feb 13 14:49:29 
 *      lastMod :  Sat Feb 13 14:49:29 2021 
 **/

const int ALPHABETS=26;
class WordDictionary {
public:
    /** Initialize your data structure here. */
    bool isEndOfWord;
    WordDictionary *children[ALPHABETS];

    WordDictionary() {
      this->isEndOfWord = false;
      for (int i = 0; i < ALPHABETS; ++i)
        this->children[i] = nullptr;
    }

    void addWord(string word) {
      WordDictionary* pCrawl = this;

      for (int i = 0; i < word.length(); ++i) {
        int index = word[i]-'a';
        if (!pCrawl->children[index])
          pCrawl->children[index] = new WordDictionary();

        pCrawl = pCrawl->children[index];
      }
      pCrawl->isEndOfWord = true;
    }

    bool search_helper(string word, WordDictionary* root, int pos) {

      if (word.length() == pos) {
        if (root->isEndOfWord)
          return true;
        return false;
      }

      if (word[pos] != '.') {
        if (!root->children[word[pos]-'a'])
            return false;
        return search_helper(word, root->children[word[pos]-'a'], pos+1);
      }
      else {
          for (int j = 0; j < ALPHABETS; ++j) {
            if (root->children[j] == nullptr)
              continue;
            else {
              if (search_helper(word, root->children[j], pos+1))
                return true;
            }
          }
      }
      return false;
    }

    bool search(string word) {
      return search_helper(word, this, 0);
    }

};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
