/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
       if(nums.size() <=1 ) {
           return nums.size();
       }

        int j = 0;
        for (size_t i = 1; i < nums.size(); i++)
        {
            /* code */
            if( nums[j] != nums[i] ) {
                
                j++;

                nums[j] = nums[i];
            }

        }

        return j + 1;
    }
};
// @lc code=end

int main()
{
    Solution solution;

    int ilength =0;
    
    vector<int> testData;
    testData.push_back(0);
    testData.push_back(0);
    testData.push_back(1);
    testData.push_back(1);
    testData.push_back(1);
    testData.push_back(2);
    testData.push_back(2);
    testData.push_back(3);

    ilength = solution.removeDuplicates(testData);

    return 0;
}
