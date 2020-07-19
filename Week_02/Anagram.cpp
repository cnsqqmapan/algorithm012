
#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

/**
* 判断字符串t 中是否包含字符串 s 的异位字母。
* true: 包含异位字母，false:不包含异位字母
*/
bool IsAnagram(string s, string t);

int main()
{
	string strSource = "abcdef";
	string strDest = "fedcba";
	
	bool bIsTest = IsAnagram(strSource, strDest);
	
    return 0;
}

bool IsAnagram(string s, string t) {

	if (s.length() != t.length()) {
		return false;
	}

	int iLength = s.length();
	int szCount[26] = {0};

	for (int i = 0; i < iLength; i++){
		szCount[s[i] - 'a']++;
		szCount[t[i] - 'a']--;
	}

	for (int i = 0; i < 26; i++){
		if (szCount[i]) {
			return false;
		}
	}

	return true;
}




