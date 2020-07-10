
//two sum
//
//
//

#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums,int target) {

	unordered_map<int,int> hash;

	vector<int> res;
	
	for(int i = 0; i < nums.size();i++) {
		
		int numberToFind = target - nums[i];
		auto it = hash.find(numberToFind);
		
		if(it != hash.end()) {
			res.push_back(it->second);
			res.push_back(i);
			return res;
		}
		
		hash[nums[i]] = i;

	}

	return res;
}

int main() {

	vector<int> testData;
	testData.push_back(2);
	testData.push_back(7);
	testData.push_back(11);
	testData.push_back(15);
	
	int itarget = 9;

	vector<int> res;
	res = twoSum(testData,itarget);
	
	vector<int>::iterator it;
	for(it = testData.begin(); it != testData.end(); it++) {
		//std::cout << *it << std::endl;
	}


	return 0;

}






