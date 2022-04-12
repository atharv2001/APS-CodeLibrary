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
    char ch;
    int heads=0,tails=0;
    for(int i=0;i<n;i++){
        cin>>ch;
        if(ch=='h') heads++;
        if(ch=='t') tails++;
    }
    if(heads>tails)
        cout<<"Computer Science"<<endl;
    else if(tails>heads){
        cout<<"Mechanical"<<endl;
    }
    else{
        cin>>ch;
        if(ch=='h') cout<<"Computer Science"<<endl;
        if(ch=='t') cout<<"Mechanical"<<endl;
    }
    return 0;
}
