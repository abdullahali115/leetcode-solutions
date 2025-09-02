#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        for(int i=0;i<intervals.size();i++)
        {
            for(int j = 0;j<intervals.size();j++)
            {
                if(intervals[i][0] < intervals[j][0])
                    swap(intervals[i], intervals[j]);
            }
        }
        for(int i=0;i<intervals.size()-1;i++)
        {
            if((intervals[i][1] >= intervals[i+1][0] && intervals[i][1] <= intervals[i+1][1]) || (intervals[i+1][1] >= intervals[i][0] && intervals[i+1][1] <= intervals[i][1]))
            {
                if(intervals[i][0] >= intervals[i+1][0])
                    intervals[i][0] = intervals[i+1][0];
                if(intervals[i][1] <= intervals[i+1][1])
                    intervals[i][1] = intervals[i+1][1];
                intervals.erase(intervals.begin() + i+1);
                i--;
            }
        }
        return intervals;
    }
};