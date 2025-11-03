#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        bool check = false;
        if(N < 0){
            N *=-1;
            check = true;
        }
        double res = 1;
        while(N > 0)
        {
            if(N%2 == 1)
                res*=x;
            x*=x;
            N/=2;
        }
        if(check)
            return 1/res;
        return res;
    }
};

int main()
{
    Solution s;
    cout << "1 raised to the power of -2147483648: " << s.myPow(1, -2147483648) << endl;
    return 0;
}