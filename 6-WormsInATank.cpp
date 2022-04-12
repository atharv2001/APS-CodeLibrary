#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int dx[8]={-1,-1,-1,0,1,1,1,0};
int dy[8]={-1,0,1,1,1,0,-1,-1};

bool isValid(vector<vector<int>> &img, vector<vector<bool>> &vis, int i, int j){
    int n=img.size();
    int m=img[0].size();
    if(i>=0 && j>=0 && i<n && j<m && img[i][j]==1 && !vis[i][j])
        return true;
    return false;
}

void dfs(vector<vector<int>> &img, vector<vector<bool>> &vis, int i, int j){
    vis[i][j]=true;
    for(int k=0;k<8;k++){
        if(isValid(img,vis,i+dx[k],j+dy[k]))
            dfs(img,vis,i+dx[k],j+dy[k]);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<vector<int>> img(n, vector<int> (n,0));
    vector<vector<bool>> vis(n, vector<bool> (n,false));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>img[i][j];
        }
    }

    int worms=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(img[i][j]==1 && !vis[i][j]){
                worms++;
                dfs(img,vis,i,j);
            }
        }
    }
    cout<<worms<<endl;
    return 0;
}
