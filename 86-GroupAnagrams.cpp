#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string> > groupAnagrams(vector<string>& strs) {
        vector<vector<string> > y;
        map<string,vector<string> > group;
        int n=strs.size();
        for(int i=0;i<n;i++)
        {
            string s1=strs[i];
            sort(s1.begin(),s1.end());
            group[s1].push_back(strs[i]);
        }
        map<string,vector<string> >::iterator it = group.begin();
        while(it!=group.end())
        {
            y.push_back(it->second);
            it++;
        }
    }
};
