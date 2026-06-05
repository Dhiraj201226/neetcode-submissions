class Solution {
public:
   int dfs(vector<vector<int>>&grid,int row,int col,int n,int m){
        if(row>=n||row<0||col<0||col>=m||grid[row][col]==0){
            return 0;
        }
             grid[row][col]=0;
             int area=1;
                    vector<vector<int>>dir={{0,1},{1,0},{0,-1},{-1,0}};
                    for(auto & it:dir){
                        int new_x=row+it[0];
                        int new_y=col+it[1];
                       area+= dfs(grid,new_x,new_y,n,m);
                
        }
    
    return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                     int count=dfs(grid,i,j,n,m);
                        ans=max(ans,count);
                    }
                }
            }
        return ans;
    }
};
