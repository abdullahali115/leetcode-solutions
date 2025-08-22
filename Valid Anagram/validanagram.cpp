#include <iostream>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        unordered_map<char, int> char_counts;
        for(int i=0; i< s.length();i++)
        {
            char_counts[s[i]]++;
            char_counts[t[i]]--;
        }
        for(auto &p : char_counts)
        {
            if(p.second != 0)
                return false;
        }
        return true;
    }
};