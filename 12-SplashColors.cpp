#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<" "<<4<<endl;
        return;
    }
    if(n==2){
        cout<<5<<" "<<12<<endl;
        return;
    }
    int tn = 2*n-1;
    int perimeter,colors;
    colors = (n*(1+tn)) - tn;
    int midlayers = tn - 3;
    perimeter = 4*3 + midlayers*4;
    cout<<colors<<" "<<perimeter<<endl;
    return;

}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}
