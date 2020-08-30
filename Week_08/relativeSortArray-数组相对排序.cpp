/**
* 208. ʵ��һ�� Trie (ǰ׺��)������ insert, search, �� startsWith ������������
*�� arr1?�е�Ԫ�ؽ�������ʹ arr1 ��������˳���?arr2?�е����˳����ͬ��δ��?arr2?�г��ֹ���Ԫ����Ҫ�����������?arr1?��ĩβ��
?
���룺arr1 = [2,3,1,3,2,4,6,7,9,2,19], arr2 = [2,1,4,3,9,6]
�����[2,2,2,1,4,3,3,9,6,7,19]

*
*/

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <map>
using namespace std;

class Solution {
public:
	vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

		map<int, int> m;
		for (auto i : arr1) {
			m[i]++;
		}

		auto pos = 0;
		for (auto j : arr2) {
			while (m[j]-- > 0) {
				arr1[pos++] = j;
			}
		}

		for (auto it : m) {
			while (it.second-- > 0) {
				arr1[pos++] = it.first;
			}
		}

		return arr1;
	}
};

int main()
{

	vector<int> testData;

	testData.push_back(1);
	testData.push_back(2);
	testData.push_back(2);
	testData.push_back(3);
	testData.push_back(3);
	testData.push_back(3);
	testData.push_back(4);
	testData.push_back(4);
	testData.push_back(5);


	vector<int> array2;
	array2.push_back(2);
	array2.push_back(3);
	array2.push_back(4);
	array2.push_back(5);


	Solution solution;
	solution.relativeSortArray(testData, array2);

	return 0;
}



