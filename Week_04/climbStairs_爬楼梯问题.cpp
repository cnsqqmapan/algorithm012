/**
* 70 ��¥������
*  ����һ��¥������ÿ��ֻ����1 �������� 2����������Ҫ���ٲ������ܵ�¥��
*
* ���磺
* ����: n = 3 
* ���: 3
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
	//��������
	Solution solution;
	int iRet = solution.climbStairs(5);

    return 0;
}




