#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() <=1)
            return nums[0];
        int* result = new int[nums.size()];
        result[0] = nums[0];
        result[1] = max(nums[0], nums[1]);
        for(int i=2;i<nums.size();i++)
        {
            result[i] = max(result[i-2]+nums[i], result[i-1]);
        }
        int res = result[nums.size()-1];
        delete[] result;
        return res;
    }
};