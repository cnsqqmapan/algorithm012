/**
* 70. 爬楼梯问题
* 你正在爬楼梯，需要n 阶楼梯你才能到达楼顶。
* 每次你只能爬1 或者 2个台阶，你有多少种方式可以爬到楼顶
*
* 例如：
* 输入: 2
* 输出: 2  
* 1+1 or 2
*
*/

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution {
public:
	int climbStairs(int n) {

		//terminate
		if (0 == n) return 0;
		if (1 == n) return 1;
		if (2 == n) return 2;

		//current
		int one_step_before = 2;
		int two_step_before = 1;
		int all_ways = 0;

		for (int i = 2; i < n; i++) {
			all_ways = one_step_before + two_step_before;
			two_step_before = one_step_before;
			one_step_before = all_ways;
		}

		//return 
		return all_ways;
	}
};

int main()
{
	Solution solution;
	int iRes = solution.climbStairs(5);


    return 0;
}




