/**
* 208. 实现一个 Trie (前缀树)，包含 insert, search, 和 startsWith 这三个操作。
*
Trie trie = new Trie();

trie.insert("apple");
trie.search("apple");   // 返回 true
trie.search("app");     // 返回 false
trie.startsWith("app"); // 返回 true
trie.insert("app");
trie.search("app");     // 返回 true

*
*/

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>
using namespace std;

class Trie {

private:
	bool bIsEnd;
	Trie* next[26];

public:
	/** Initialize your data structure here. */
	Trie() {
		bIsEnd = false;
		memset(next, 0, sizeof(next));
	}

	/** Inserts a word into the trie. */
	void insert(string word) {
		Trie* node = this;
		for (char c : word) {
			if (node->next[c - 'a'] == NULL) {
				node->next[c - 'a'] = new Trie();
			}
			node = node->next[c - 'a'];
		}
		node->bIsEnd = true;
	}

	/** Returns if the word is in the trie. */
	bool search(string word) {
		Trie* node = this;
		for (char c : word) {
			node = node->next[c - 'a'];
			if (NULL == node) {
				return false;
			}
		}

		return node->bIsEnd;
	}

	/** Returns if there is any word in the trie that starts with the given prefix. */
	bool startsWith(string prefix) {
		Trie* node = this;
		for (char c : prefix) {
			node = node->next[c - 'a'];
			if (NULL == node) {
				return false;
			}
		}

		return true;
	}
};





