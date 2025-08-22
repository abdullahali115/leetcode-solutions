#include<iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m1;
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            int rem = target - nums[i];
            auto it = m1.find(rem);
            if(it != m1.end())
            {
                result.push_back(it->second);
                result.push_back(i);
                break;
            }
            m1[nums[i]] = i;
        }
        return result;
    }
};