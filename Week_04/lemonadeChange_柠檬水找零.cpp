/**
* 860 柠檬水找零
*  一杯柠檬水 5元，顾客给 10 元，找5元，给20 元 找 15 元，开始的时候，你没有零钱
* 如果正确找零钱 返回true ， 否则 返回false
*
* 例如：
* 输入: [5,5,5,10]
* 输出: true
*
*/

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	bool lemonadeChange(vector<int>& bills) {
		
		int five = 0;
		int ten = 0;

		for (int i : bills){
			
			if (5 == i) five++;
			else if (10 == i) ten++,five--;
			else if (ten > 0) five--, ten--;
			else five -= 3;

			if (five < 0) return false;

		}
		return true;
	}
};

int main()
{
	vector<int> testData;
	testData.push_back(5);
	testData.push_back(5);
	testData.push_back(10);
	testData.push_back(5);
	testData.push_back(20);


	//测试数据
	Solution solution;
	bool bIsTrue = solution.lemonadeChange(testData);


    return 0;
}




