/**
 *      file    :  208_ImplementTrie.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Feb 11 00:51:38 
 *      lastMod :  Thu Feb 11 00:51:38 2021 
 **/

class Trie {
public:
    bool isEndOfWord;
    unordered_map<char, Trie*>children;

    Trie() {
      this->isEndOfWord = false;
    }

    void insert(string word) {
      Trie* crawl = this;
      for (int i =0; i < word.length(); ++i) {
        if (crawl->children.find(word[i]) == crawl->children.end())
          crawl->children[word[i]] = new Trie;

        crawl = crawl->children[word[i]];
      }
      crawl->isEndOfWord = true;

    }

    bool search(string word) {
      Trie *crawl = this;

      for (int i = 0; i < word.length(); ++i) {
        if (crawl->children.find(word[i]) == crawl->children.end())
          return false;

        crawl = crawl->children[word[i]];
      }

      return crawl && crawl->isEndOfWord;
    }

    bool startsWith(string prefix) {
      Trie *crawl = this;

      for (int i = 0; i < prefix.length(); ++i) {
        if (crawl->children.find(prefix[i]) == crawl->children.end())
          return false;
        crawl = crawl->children[prefix[i]];
      }
      return true;
    }
};

/*

const int ALPHABET_SIZE = 26;
class Trie {
public:
    bool isEndOfWord;
    Trie *children[ALPHABET_SIZE];

    Trie() {
      this->isEndOfWord = false;
      for (int i = 0; i < ALPHABET_SIZE; ++i)
        this->children[i] = nullptr;
    }

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

*/
/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
