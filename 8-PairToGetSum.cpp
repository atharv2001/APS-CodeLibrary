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

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<int> nums(n);
     for(int i=0;i<n;i++)
         cin>>nums[i];
    int m;
    cin>>m;
    sort(nums.begin(),nums.end());
    int i=0,j=n-1;
    set<pair<int,int>> s;
    while(i<j){
        if(nums[i]+nums[j]==m && s.find({nums[j],nums[i]})==s.end()){
            s.insert({nums[i],nums[j]});
            i++;
            j--;
        }else if(nums[i]+nums[j]>m){
            j--;
        }else
            i++;
    }
    for(auto &p:s){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}
