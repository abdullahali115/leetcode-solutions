#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool rowCheck = false, colCheck = false;
        for(int i=0;i<matrix.size();i++)
        {
            if(matrix[i][0] == 0)
            {
                colCheck = true;
                break;
            }
        }
        for(int i=0;i<matrix[0].size();i++)
        {
            if(matrix[0][i] == 0)
            {
                rowCheck = true;
                break;
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for(int i=0;i<matrix[0].size();i++)
        {
            if(matrix[0][i] == 0 && i!=0)
            {
                for(int j = 0;j<matrix.size();j++)
                {
                    matrix[j][i] = 0;
                }
            }
        }
        for(int i = 0;i<matrix.size();i++)
        {
            if(matrix[i][0] == 0 && i!=0)
            {
                for(int j = 0;j<matrix[0].size();j++)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        if(colCheck)
        {
            for(int i=0;i<matrix.size();i++)
            {
                matrix[i][0] = 0;
            }
        }
        if(rowCheck)
        {
            for(int i=0;i<matrix[0].size();i++)
            {
                matrix[0][i] = 0;
            }
        }
    }
};