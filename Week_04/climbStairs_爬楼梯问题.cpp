/**
* 70 爬楼梯问题
*  给出一个楼梯数，每次只能走1 步，或者 2步，最终需要多少步，才能到楼顶
*
* 例如：
* 输入: n = 3 
* 输出: 3
*
*/

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int climbStairs(int n) {

		int all = 1; 
		int p = 0;
		int q = 0;

		for (int i = 0; i < n; i++) {
			q = p;
			p = all;
			all = p + q;
		}
		
		return all;
	}
};

int main()
{
	//测试数据
	Solution solution;
	int iRet = solution.climbStairs(5);

    return 0;
}




