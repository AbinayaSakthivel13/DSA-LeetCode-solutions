class WordDictionary {
private:
    struct TrieNode {
        TrieNode* children[26] = {};
        bool isEnd = false;
    };

    TrieNode* root;

    bool dfs(TrieNode* node, const string& word, int index) {
        if (!node) return false;
        if (index == word.size()) return node->isEnd;

        char ch = word[index];
        if (ch == '.') {
            for (int i = 0; i < 26; ++i) {
                if (dfs(node->children[i], word, index + 1)) return true;
            }
            return false;
        } else {
            return dfs(node->children[ch - 'a'], word, index + 1);
        }
    }

public:
    WordDictionary() {
        root = new TrieNode();
    }

    void addWord(string word) {
        TrieNode* node = root;
        for (char ch : word) {
            int idx = ch - 'a';
            if (!node->children[idx]) node->children[idx] = new TrieNode();
            node = node->children[idx];
        }
        node->isEnd = true;
    }

    bool search(string word) {
        return dfs(root, word, 0);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */