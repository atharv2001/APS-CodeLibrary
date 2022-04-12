#include<bits/stdc++.h>
using namespace std;

int assignJobsWithMinimumCost(vector<vector<int>> &cost,int n){
    int N = 1<<n;
    int dp[N];
    dp[0]=0;
    for(int i=1;i<N;i++){
        dp[i]=INT_MAX;
    }
    for(int mask=0;mask<N;mask++){
        int x = __builtin_popcount(mask);
        for(int j=0;j<n;j++){
            if(mask & (1<<j))
                continue;
            dp[mask | (1<<j)] = min(dp[mask|(1<<j)],dp[mask]+cost[x][j]);
        }
    }
    return dp[N-1];
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> cost(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>cost[i][j];
        }
    }
    int ans = assignJobsWithMinimumCost(cost,n);
    cout<<ans<<endl;
    return 0;
}
