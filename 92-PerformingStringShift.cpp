#include<bits/stdc++.h>
class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int count=0;
        for(int i=0;i<shift.size();i++)
        {
            int direction=shift[i][0];
            int amount=shift[i][1];
            if(direction==0)
                count -= amount;
            else
                count += amount;
        }
        if(count>0)
            rightrotate(s,count);
        else if(count<0)
            leftrotate(s,count);
        return s;
    }
        void leftrotate(string &s,int d)
    {
        d=abs(d);
        reverse(s.begin(),s.begin()+d);
        reverse(s.begin()+d,s.end());
        reverse(s.begin(),s.end());
    }
    void rightrotate(string &s,int d)
    {
        leftrotate(s,s.length()-d);
    }
};

int main()
{
    Solution solution;
    string s;
    vector<vector<int> > shift={{1,4},{0,7},{0,8},{0,7},{0,6},{1,3},{0,1},{1,7},{0,5},{0,6}};
    cout<<"Enter string s:\n";
    cin>>s;
    cout<<"Original string is: "<<s<<endl;
    s=solution.stringShift(s,shift);
    cout<<"After shift string is: "<<s<<endl;
    return 0;
}
