/**
编写一个函数，输入是一个无符号整数，返回其二进制表达式中数字位数为 ‘1’ 的个数（也被称为汉明重量）。
输入：00000000000000000000000000001011
输出：3
解释：输入的二进制串 00000000000000000000000000001011 中，共有三位为 '1'。
*
*/

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <map>
using namespace std;

class Solution {
public:
	int hammingWeight(uint32_t n) {

		auto count = 0;
		while (n) {
			n &= n - 1;
			count++;
		}
		
		return count;
	}
};


int main()
{
	uint32_t test = 00000000000000000000000000001011;
	auto Count = 0;

	Solution solution;
	Count = solution.hammingWeight(test);
	
	return 0;
}



