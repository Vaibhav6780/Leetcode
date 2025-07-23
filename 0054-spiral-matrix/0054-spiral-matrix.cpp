class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();//rows
        int n=matrix[0].size();//cols
        int minrow=0;
        int mincol=0;
        int maxrow=m-1;
        int maxcol=n-1;
        vector<int> b;
        while(minrow<=maxrow && mincol<=maxcol){
            for(int j=mincol;j<=maxcol;j++){
                b.push_back(matrix[minrow][j]);
            } minrow++;
            if(minrow>maxrow || mincol>maxcol) break;
            for(int i=minrow;i<=maxrow;i++){
                b.push_back(matrix[i][maxcol]);
            }maxcol--;
            if(minrow>maxrow || mincol>maxcol) break;
            for(int j=maxcol;j>=mincol;j--){
                b.push_back(matrix[maxrow][j]);
            }maxrow--;
            if(minrow>maxrow || mincol>maxcol) break;
            for(int i=maxrow;i>=minrow;i--){
                b.push_back(matrix[i][mincol]);
            }mincol++;
            if(minrow>maxrow || mincol>maxcol) break;
        }
        return b;

    }
};