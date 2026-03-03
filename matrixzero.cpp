class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int k,i,j;
        int n=matrix[0].size();
        int m=matrix.size();
        vector<vector<int>> copy=matrix;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(copy[i][j]==0)
                {
                  matrix[i].assign(matrix[i].size(), 0);
                  for(k=0;k<m;k++)
                  {
                    matrix[k][j]=0;
                    
                  }
                  
                }
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<matrix[i][j]<<endl;
            }
        }
        return ;
    }
};
