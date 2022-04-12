#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,n=prices.size();
        for(int i=0;i+1<n;i++){
            if(prices[i]<prices[i+1]){
                profit+= (prices[i+1]-prices[i]);}
        }
        return profit;
    }
};

int main()
{
    Solution solution;
    int n;
    cout<<"Enter number of elements of array\n";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int ans=solution.maxProfit(v);
    cout<<ans<<endl;

}
