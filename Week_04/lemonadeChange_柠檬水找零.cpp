/**
* 860 ����ˮ����
*  һ������ˮ 5Ԫ���˿͸� 10 Ԫ����5Ԫ����20 Ԫ �� 15 Ԫ����ʼ��ʱ����û����Ǯ
* �����ȷ����Ǯ ����true �� ���� ����false
*
* ���磺
* ����: [5,5,5,10]
* ���: true
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


	//��������
	Solution solution;
	bool bIsTrue = solution.lemonadeChange(testData);


    return 0;
}




