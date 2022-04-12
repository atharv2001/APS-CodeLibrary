#include<bits/stdc++.h>
using namespace std;
class KadaneAlgorithm {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0],curr_max=nums[0],capacity=nums.size();
        for(int i=1;i<capacity;i++){
            curr_max =max(nums[i],curr_max+nums[i]);
            sum=max(sum,curr_max);
        }
        return sum;
    }
};

int main()
{
    KadaneAlgorithm k;
    int x,length;
    cout<<"Enter number of elements of array"<<endl;
    cin>>length;
    vector<int> v(length);
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<length;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    //result=k.maxSub
    cout<<"The max sum is:"<<k.maxSubArray(v)<<endl;

}
