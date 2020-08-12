/**
* 64. ��С·����
* ����һ��m*n�����񣬴����Ͻǵ����½ǣ�ʹ��·���ϵ������ܺ�Ϊ��С
*
* ���磺
* ����: [
		  [1,3,1],
		  [1,5,1],
		  [4,2,1]
		]
* ���: 7
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
		
		//ȷ������Ŀ��
		int rows = grid.size();
		int column = grid[0].size();

		//��ʼ������
		auto dp = vector<vector<int>>(rows, vector<int>(column,grid[0][0]));
		dp[0][0] = grid[0][0];

		//���� dp ��ʽ
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
		
		//����ֵ
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


	//��������
	Solution solution;
	minPath = solution.minPathSum(grid);

    return 0;
}




