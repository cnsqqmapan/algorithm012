

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <map>
using namespace std;


//给定一个字符串 s 和一个整数 k，你需要对从字符串开头算起的每隔 2k 个字符的前 k 个字符进行反转。
//
//如果剩余字符少于 k 个，则将剩余字符全部反转。
//如果剩余字符小于 2k 但大于或等于 k 个，则反转前 k 个字符，其余字符保持原样。
//
//
//示例 :
//
//输入: s = "abcdefg", k = 2
//	输出 : "bacdfeg"

class Solution {
public:
	string reverseStr(string s, int k) {
		for (int left = 0; left < s.size(); left += 2 * k) {
			for (int i = left, j = min(left + k - 1, (int)s.size() - 1); i < j; i++, j--) {
				swap(s[i], s[j]);
			}
		}
		return s;
	}
};


int main()
{
	string strInfo =  "leetcode";
	Solution solution;
	string iIndex = solution.reverseStr(strInfo,2);

	//Count = solution.hammingWeight(test);
	//solution.relativeSortArray(testData, array2);

	return 0;
}



