#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include<bits/stdc++.h>
using namespace std;
int dx[8]={-1,-1,-1,0,1,1,1,0};
int dy[8]={-1,0,1,1,1,0,-1,-1};

bool isValid(vector<vector<int>> &mat,int i, int j,vector<vector<bool>> &vis){
    int n=mat.size();
    int m=mat[0].size();// same as n in this case?
    if(i>=0 && j>=0 && i<n && j<m && mat[i][j]==1 && !vis[i][j])
        return true;
    return false;
}

void dfs(vector<vector<int>> &mat,vector<vector<bool>> &vis,int i,int j,int &curArea){
    vis[i][j]=true;
    curArea++;
    for(int k=0;k<8;k++){
        if(isValid(mat,i+dx[k],j+dy[k],vis)){
            dfs(mat,vis,i+dx[k],j+dy[k],curArea);
        }
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<vector<int>> mat(n,vector<int> (n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    vector<vector<bool>> vis(n,vector<bool> (n,false));
    int mxArea=0;
    int curArea;
    int tribes=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            curArea=0;
            if(mat[i][j]==1 && !vis[i][j]){
                tribes++;
                dfs(mat,vis,i,j,curArea);
                mxArea = max(curArea,mxArea);
            }
        }
    }
    cout<<tribes<<"\n";
    cout<<mxArea<<"\n";
    return 0;
}
