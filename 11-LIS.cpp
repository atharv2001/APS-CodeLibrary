int longestIncreasingSubsequence(vector<int> arr) {
    vector<int> seq;
    seq.push_back(arr[0]);
    int n= arr.size();
    for(int i=1;i<n;i++){
        if(seq.back()<arr[i])
            seq.push_back(arr[i]);
        else{
            int idx = lower_bound(seq.begin(),seq.end(),arr[i]) - seq.begin();
            seq[idx]=arr[i];
        }
    }
    return seq.size();
}
