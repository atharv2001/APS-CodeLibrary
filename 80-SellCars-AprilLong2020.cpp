#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,i,n,j,x,k,z;
	long long int profit;
	cin>>t;
	for(int j=0;j<t;j++){
	   cin>>n;
	   profit=0;
	   int arr[n];
	   for(i=0;i<n;i++){
	      cin>>arr[i];
	   }
	   sort(arr,arr+n);
	   //vector<int>::iterator it=v.end()-1;
       for(k=0,z=n-1;z>=0;z--,k++)
       {
           profit= max(profit,profit +arr[z] -k);
        }
        cout<< profit%1000000007 <<endl;

	}
	return 0;
}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,i,n,j,x,k;
	long long int profit;
	cin>>t;
	for(int j=0;j<t;j++){
	   cin>>n;
	   profit=0;
	   vector<int> v(n);
	   for(i=0;i<n;i++){
	      cin>>x;
	      v.push_back(x);
	   }
	   sort(v.begin(),v.end());
	   //vector<int>::iterator it=v.end()-1;
	   int z=v.size()-1;
       for(k=0;z>=0;z--,k++)
       {
           profit= max(profit,profit +v[z] -k);
        }
        cout<< profit%1000000007 <<endl;

	}
	return 0;
}
