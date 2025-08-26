#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);
        int temp = 1;
        for(int i=1;i<nums.size();i++)
        {
            temp*=nums[i-1];
            result[i] = temp;
        }
        temp = 1;
        for(int i=nums.size() - 1; i>=0 ;i--)
        {
            if(i == nums.size()-1){
                result[i] *= 1;
                continue;
            }
            temp*=nums[i+1];
            result[i] *= temp;
        }
        return result;
    }
};