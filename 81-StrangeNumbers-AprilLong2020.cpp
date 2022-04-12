#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
  return true;
}

int main()
{
    int t,p,x,k,num,divisors,i,prime;
    cin>>t;
    for(p=0;p<t;p++){
        cin>>x>>k;
        if(x==2 && k==1){
            cout<<"1\n";
            continue;}
        else if(x==k){
            cout<<"0\n";
            continue;}
        else{
            for(num=4,divisors=1,prime=0;divisors!=x;num++){
                    divisors=1;
                    prime=0;
                    if(num%2==0 && num%3==0)
                        prime=prime+2;
                    else if(num%2==0 || num%3==0)
                        prime++;
                for(i=2;i<num;i++){
                    if(num%i==0){
                        divisors++;
                        if(isPrime(i))
                            prime++;
                    }
                }
            }
                if(prime==k)
                    cout<<"1\n";
                else
                    cout<<"0\n";

        }

    }


    return 0;
}
