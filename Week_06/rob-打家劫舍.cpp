/**
* 198. 打家劫舍
* 给定一个数组，两个连续的元素不能访问，求走完数组，最大的数据。
* 1.从数组中获取最大利润。
*
* 例如：
* 输入: [1,2,3,1]
* 输出: 4   
* 1 --> 3
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
	int rob(vector<int>& nums) {

		//terminate
		if (0 == nums.size()) {
			return 0;
		}

		//子问题
		int allSize = nums.size();
		auto tmp = new int[allSize][2];
		
		//状态保存
		tmp[0][0] = 0;
		tmp[0][1] = nums[0];
		
		//dp 方程
		for (int i=1; i < allSize; i++) {
			tmp[i][0] = max(tmp[i - 1][0], tmp[i - 1][1]);
			tmp[i][1] = tmp[i - 1][0] + nums[i];
		}

		return max(tmp[allSize - 1][0], tmp[allSize - 1][1]);
	}
};

int main()
{

	int minPath = 0;

	vector<vector<int>> grid;
	grid.push_back({ 1,3,1 });
	grid.push_back({ 1,5,1 });
	grid.push_back({ 4,2,1 });

	/*vector<vector<int>> retOut;

	TreeNode* root = new struct TreeNode(3);
	TreeNode* node1 = new struct TreeNode(9);
	TreeNode* node2 = new struct TreeNode(20);
	TreeNode* node3 = new struct TreeNode(15);
	TreeNode* node4 = new struct TreeNode(7);

	root->left = node1;
	root->right = node2;
	node2->left = node3;
	node2->right = node4;*/




	//int vctStore;
	////123113
	vector<int> testData;
	testData.push_back(2);
	testData.push_back(3);
	testData.push_back(1);
	testData.push_back(1);
	testData.push_back(4);

	//测试数据
	Solution solution;
	minPath = solution.rob(testData);

    return 0;
}




