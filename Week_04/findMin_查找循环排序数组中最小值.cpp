/**
* 153  从旋转排序数组中  找出一个最小值
*
* 例如：
* 输入: [5,6,7,0,2,3]
* 输出: 0
*
*/

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int findMin(vector<int>& nums) {

		int left = 0;
		int right = nums.size() - 1;
		
		while (left < right){

			int mid = left + (right - left) / 2;
			
			if (nums[mid] > nums[right]) {
				left = mid + 1;
			}
			else {
				right = mid;
			}
		}

		return nums[left];
	}
};

int main()
{
	vector<int> testData;
	testData.push_back(5);
	testData.push_back(6);
	testData.push_back(7);
	testData.push_back(1);
	testData.push_back(2);
	testData.push_back(3);

	//测试数据
	Solution solution;
	int ivalue = solution.findMin(testData);


    return 0;
}




