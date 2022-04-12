class Solution {
private:
    int solve(TreeNode* root, int &ans){
        if(root==NULL){
            return 0;
        }
        int l = solve(root->left,ans);
        int r = solve(root->right,ans);
        //Both l and r positive
        ans = max(ans, l+r+root->val);
        //Case 2 only l positive
        ans = max(ans,l+root->val);
        //Case 3 only r positive
        ans = max(ans,r+root->val);
        //Case 4 l and r negative
        ans = max(ans,root->val);
        return max(max(l,r) + root->val,root->val);

    }
public:
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        solve(root,ans);
        return ans;
    }
};
