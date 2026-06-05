class Solution {
public:
    void dfs(vector<vector<char>>&grid,int row,int col,int n,int m){
        if(row>=n||row<0||col<0||col>=m||grid[row][col]=='0'){
            return;
        }
       else if(grid[row][col]=='1'){
             grid[row][col]='0';
                    vector<vector<int>>dir={{0,1},{1,0},{0,-1},{-1,0}};
                    for(auto & it:dir){
                        int new_x=row+it[0];
                        int new_y=col+it[1];
                        dfs(grid,new_x,new_y,n,m);
        }
    }
    }
    int numIslands(vector<vector<char>>& grid) {

        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                        dfs(grid,i,j,n,m);
                        count++;
                    }
                }
            }
        return count;
    }
};
