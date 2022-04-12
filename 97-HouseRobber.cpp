int rob(vector<int>& nums) {
    int n=nums.size();
    if(n==0) return 0;
    int prev=0,prev2=0,cur;
    for(int i=0;i<n;i++){
        cur = max(prev,prev2+nums[i]);
        prev2=prev;
        prev=cur;
    }
    return prev;
}
