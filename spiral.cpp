class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> arr;
        if(matrix.size()==0)return {};


        int i,right=matrix[0].size()-1;
        int left=0,top=0,bottom=matrix.size()-1;
        while(left<=right && top<=bottom)
        {
            for(i=left;i<=right;i++)
            {
                arr.push_back(matrix[left][i]);
            }
            top++;
            for(i=top;i<=bottom;i++)
            {
                arr.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
                for(i=right;i>=left;i--)
              {
                  arr.push_back(matrix[bottom][i]);
              }
            }
            bottom--;
            if(left<=right){
                for(i=bottom;i>=top;i--)
                {
                   arr.push_back(matrix[i][left]);
                 }
            left++;
            }
    
        }
        return arr;
    }
        
};
