#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
         if(n==4)
            return false;
        else{

        int new_num=0,num=n,digit;
        while(num>0){
            digit=num%10;
            new_num += pow(digit,2);
            num=num/10;
        }
        n=new_num;
        if(n==1)
            return true;
        else
            return isHappy(n);
        }
    }
};
int main()
{
    int num;
    bool result;
    Solution solution;
    cout<<"Enter Number to check if it is a Happy Number or not"<<endl;
    cin>>num;
    result=solution.isHappy(num);
    if(result)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
}
