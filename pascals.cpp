class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int i,j;
        vector<vector<int>> tri;
        for(i=0;i<numRows;i++){
            vector<int> row(i+1,1);
            for(j=1;j<i;j++)
            {
                row[j]=tri[i-1][j-1]+tri[i-1][j];
                
            }
            tri.push_back(row);
        }
        return tri;
        
    }
};
