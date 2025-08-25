#include <iostream>
using namespace std;

class Solution {
public:
    double climbStairs(int n) {
        int a = 1, b = 1;
        double temp = 0;
        for(int i=0;i<n-1;i++)
        {
            temp = a;
            a = a+b;
            b = temp;
        }
        return a;
    }
};