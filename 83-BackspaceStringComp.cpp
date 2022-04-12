#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string S, string T) {
        deque<char> string1,string2;
        int n1=S.length(),n2=T.length();
        for(int i=0;i<n1;i++)
        {
            if(S[i]=='#'){
                string1.pop_back();
            }
            else
                string1.push_back(S[i]);
        }
        for(int i=0;i<n2;i++)
        {
            if(T[i]=='#'){
                string2.pop_back();
            }
            else
                string2.push_back(T[i]);
        }
        deque<char>::iterator it1=string1.begin(),it2=string2.begin();
        while(it1!=string1.end()&&it2!=string2.end())
        {
            if((*it1)!=(*it2))
                return false;
            else it1++,it2++;
        }
        return true;
    }
};

int main()
{
    Solution solution;
    string s,t;
    bool ans;
    cout<<"Enter String 1:\n";
    cin>>s;
    cout<<"Enter String 2:\n";
    cin>>t;
    ans=solution.backspaceCompare(s,t);
    if(ans)
        cout<<"True\n";
    else
    {
        cout<<"False\n";
    }
    

}