/**
* 64. 最小路径和
* 给定一个m*n的网格，从左上角到右下角，使得路径上的数字总和为最小
*
* 例如：
* 输入: [
		  [1,3,1],
		  [1,5,1],
		  [4,2,1]
		]
* 输出: 7
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
	int minPathSum(vector<vector<int>>& grid) {
		
		//确认网格的宽高
		int rows = grid.size();
		int column = grid[0].size();

		//初始化网格
		auto dp = vector<vector<int>>(rows, vector<int>(column,grid[0][0]));
		dp[0][0] = grid[0][0];

		//创建 dp 公式
		for (int i = 1; i < rows; i++){
			dp[i][0] = dp[i - 1][0] + grid[i][0];
		}

		for (int j = 1; j < column; j++) {
			dp[0][j] = dp[0][j-1] + grid[0][j];
		}

		for (int i = 1; i < rows; i++) {
			for (int j = 1; j < column; j++) {
				dp[i][j] = min(dp[i][j - 1], dp[i - 1][j]) + grid[i][j];
			}
		}
		
		//返回值
		return dp[rows - 1][column - 1];

	}
};

int main()
{

	int minPath = 0;

	vector<vector<int>> grid;
	grid.push_back({ 1,3,1 });
	grid.push_back({ 1,5,1 });
	grid.push_back({ 4,2,1 });


	//测试数据
	Solution solution;
	minPath = solution.minPathSum(grid);

    return 0;
}




