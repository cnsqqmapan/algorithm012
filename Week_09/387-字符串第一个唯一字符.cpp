

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <map>
using namespace std;


//387 字符串中的第一个唯一字符
//给定一个字符串，找到它第一个不重复的字符，并返回索引，如果不存在，则返回-1
class Solution {
public:
	int firstuniqchar(string s) {

		int hash[26] = {0};

		for (char c : s) {
			hash[c - 'a']++;
		}

		for (size_t i = 0; i < s.size(); i++) {
			if (1 == hash[s[i] - 'a']) {
				return i;
			}
		}

		return -1;
	}
};


int main()
{
	string strInfo =  "leetcode";
	Solution solution;
	int iIndex = solution.firstuniqchar(strInfo);

	//Count = solution.hammingWeight(test);
	//solution.relativeSortArray(testData, array2);

	return 0;
}



