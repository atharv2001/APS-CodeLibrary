class Solution {
private:
    void findCombinations(vector<int> &candidates,int target,int idx,int n,vector<int> &ds,vector<vector<int>> &ans){
        if(idx==n){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(candidates[idx]<=target){
            ds.push_back(candidates[idx]);
            findCombinations(candidates,target-candidates[idx],idx,n,ds,ans);
            ds.pop_back();
        }
        findCombinations(candidates,target,idx+1,n,ds,ans);
        return;
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        int n = candidates.size();
        findCombinations(candidates,target,0,n,ds,ans);
        return ans;
    }
};
