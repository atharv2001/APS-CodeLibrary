class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        if(n==1){
            return triangle[0][0];
        }
        int m = triangle[n-1].size();
        vector<int> prev(m),cur(m);
        for(int i=m-1;i>=0;i--){
            prev[i]=triangle[n-1][i];
        }

        for(int i=n-2;i>=0;i--){
            for(int j=i;j>=0;j--){
                int down = prev[j];
                int diagonal = prev[j+1];
                cur[j] = triangle[i][j] + min(down,diagonal);
            }
            prev=cur;
        }
        return prev[0];
    }
};
