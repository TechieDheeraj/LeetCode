/**
 *      file    :  208_ImplementTrie.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Feb 11 00:51:38 
 *      lastMod :  Thu Feb 11 00:51:38 2021 
 **/
const int ALPHABET_SIZE = 26;
class Trie {
public:
    bool isEndOfWord;
    Trie *children[ALPHABET_SIZE];
    /** Initialize your data structure here. */
    Trie() {
      this->isEndOfWord = false;
      for (int i = 0; i < ALPHABET_SIZE; ++i)
        this->children[i] = nullptr;
    }

    /** Inserts a word into the trie. */
    void insert(string word) {

      Trie* pCrawl = this;

      for (int i = 0; i < word.length(); ++i) {
        int index = word[i]-'a';
        if (!pCrawl->children[index])
          pCrawl->children[index] = new Trie();

        pCrawl = pCrawl->children[index];
      }
      pCrawl->isEndOfWord = true;
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {

      Trie* pCrawl = this;

      for (int i = 0; i < word.length(); ++i) {
        int index = word[i]-'a';
        if (pCrawl->children[index] == nullptr)
          return false;

        pCrawl = pCrawl->children[index];
      }
      return (pCrawl != nullptr && pCrawl->isEndOfWord);
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {

      Trie* pCrawl = this;

      for (int i = 0; i < prefix.length(); ++i) {
        int index = prefix[i]-'a';
        if (!pCrawl->children[index])
          return false;

        pCrawl = pCrawl->children[index];
      }
      return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
