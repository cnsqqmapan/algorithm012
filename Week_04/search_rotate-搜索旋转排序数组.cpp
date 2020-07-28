/**
* 33 ������ת��������
*  ����һ��������Ŀ��ֵ��������ھͷ�����������������ͷ��� -1
*
* ���磺
* ����: nums = [4,5,6,7,0,1,2], target = 0
* ���: 4
*
*/


#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int search(vector<int>& nums, int target) {

		//�߽緶Χ
		int iLeft = 0; 
		int iRight = nums.size()-1;

		while ( iLeft <= iRight ){
		
			//��λ�м�����
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
	//��������
	vector<int> testData;
	testData.push_back(5);
	testData.push_back(6);
	testData.push_back(7);
	testData.push_back(8);
	testData.push_back(1);
	testData.push_back(2);
	testData.push_back(3);
	testData.push_back(4);

	//Ŀ��ֵ
	int iTarget = 2;

	Solution solution;
	int iRet = solution.search(testData, iTarget);




    return 0;
}




