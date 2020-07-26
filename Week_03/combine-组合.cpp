
#include "stdafx.h"
#include <iostream>
#include <vector>
#include<unordered_map>

using namespace std;

//
class Solution {

private:
	//��������֮��Ľ��
	vector< vector<int> > res;

	//dfs ���ҷ��ϵĽ��
	void dfs(int n, int k, int start, vector<int> &path) {
		if (path.size() == k) {
			res.push_back(path);
			return;
		}

		for (int i = start; i <= n - (k - path.size()) + 1 ; ++i){
			path.push_back(i);
			dfs(n, k, i + 1, path);
			path.pop_back();
		}
	}

public:
	vector<vector<int>> combine(int n, int k) {
	
		//�쳣���
		if (n <= 0 || k <= 0 || k > n) {
			return res;
		}

		//�������,��ȡ����֮��Ľ��
		vector<int> path;
		dfs(n, k, 1, path);
		
		//���ؽ��
		return res;
	}
};





int main()
{
	Solution soluton;
	
	vector<vector<int>> result;
	result = soluton.combine(4, 2);

    return 0;
}




