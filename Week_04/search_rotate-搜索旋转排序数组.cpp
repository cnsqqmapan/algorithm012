/**
* 33 搜索旋转排序数组
*  搜索一个给定的目标值，如果存在就返回它的索引，否则就返回 -1
*
* 例如：
* 输入: nums = [4,5,6,7,0,1,2], target = 0
* 输出: 4
*
*/


#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int search(vector<int>& nums, int target) {

		//边界范围
		int iLeft = 0; 
		int iRight = nums.size()-1;

		while ( iLeft <= iRight ){
		
			//定位中间索引
			int iMid = iLeft + (iRight - iLeft) / 2;
			if (target == nums[iMid]) return iMid;
			else if ((target < nums[0]) ^ (target > nums[iMid]) ^ (nums[0] > nums[iMid])) {
				iLeft = iMid + 1;
			} 
			else {
				iRight = iMid - 1;
			}
		}

		return -1;
	}
};



int main()
{
	//测试数据
	vector<int> testData;
	testData.push_back(5);
	testData.push_back(6);
	testData.push_back(7);
	testData.push_back(8);
	testData.push_back(1);
	testData.push_back(2);
	testData.push_back(3);
	testData.push_back(4);

	//目标值
	int iTarget = 2;

	Solution solution;
	int iRet = solution.search(testData, iTarget);




    return 0;
}




