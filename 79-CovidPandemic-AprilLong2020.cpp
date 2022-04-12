#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,p,n,i,j,v;
	bool distancing;
	cin>>t;
	for(p=0;p<t;p++){
	    cin>>n;
	    distancing=true;
	    int arr[n+1];
	    stack<int> index;
	    for(i=1;i<=n;i++){
	        cin>>arr[i];
	    }
	    for(i=1;i<=n;i++){
	        if(arr[i]==1){
	        index.push(i);}
	    }
	        while(index.size()>1){
	        v=index.top();
	        index.pop();
	        if((v-index.top())<5){
	            distancing=false;
	            break;
	        }
	    }





	        /*if((i-index.top())<6 && index.size()>=1)
	        {
	            distancing=false;
	            break;
	        }
	        else index.push(i);}
	    }*/
	    if(distancing)
	    cout<<"YES\n";
	    else cout<<"NO\n";

	}
	return 0;
}
