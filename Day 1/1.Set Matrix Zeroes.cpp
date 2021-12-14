**- Naive Approach:**
class Solution {
public:
    void set_zeros1(vector<vector<int>>& mat,int row,int col){
        int col_size=mat.size(),row_size=mat[0].size();
        for(int i=0;i<row_size;i++){
            mat[i][col]=-1;
        }
        for(int j=0;j<col_size;j++){
            mat[row][j]=-1;
        }
    
    }
    void setZeroes(vector<vector<int>>& matrix) {
       int n=matrix[0].size();
       int m=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    set_zeros1(matrix,i,j);
                }
            }
        }
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
                if(matrix[i][j]==-1){
                    matrix[i][j]=0;
                }
            }
        }
    }
};
-----------------------------------------------------------------------------------------------------------------
