#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countElements(vector<int>& arr) {
        map<int,int> mp;
        int n=arr.size(),counter;
        for(int i=0;i<n;i++)
        {
            if(mp.find(arr[i])!=mp.end())
            {
                mp[arr[i]]++;
            }
            else
                mp[arr[i]]=1;
        }
        map<int,int>:: iterator it1=mp.begin();
        counter=0;
        while(it1!=mp.end())
        {
            if(mp.find(it1->first + 1)!=mp.end())
                counter= counter + it1->second;
            cout<<it1->first<<" "<<it1->second<<" now counter is:"<<counter<<endl;
            it1++;
        }
        return counter;
    }
};

int main()
{
    Solution obj;
    int n,ans,x;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    ans=obj.countElements(arr);
    cout<<ans<<" ";
}
