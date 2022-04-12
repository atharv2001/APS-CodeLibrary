int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        if(n==1){
            return *min_element(matrix[0].begin(),matrix[0].end());
        }
        vector<int> front(n,0),cur(n,0);
        for(int i=0;i<n;i++){
            front[i]=matrix[n-1][i];
        }
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<n;j++){
                int choice1=1e9,choice2=1e9,choice3=1e9;
                if(j>0) choice1 = front[j-1];
                choice2=front[j];
                if(j<n-1) choice3 = front[j+1];
                cur[j]=matrix[i][j] + min({choice1,choice2,choice3});
            }
            front=cur;
        }
        return *min_element(front.begin(),front.end());
    }
