class Solution {
public:
int INF=2147483647;
  vector<vector<int>>directions={{0,1},{1,0},{0,-1},{-1,0}};
   void bfs(vector<vector<int>>& grid){
           int m=grid.size();
        int n=grid[0].size();
    queue<vector<int>>q;
    int count=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==0){
                q.push({i,j});
            }
        }
    }
    while(!q.empty()){
        int s=q.size();
        count++;
        while(s--){
            vector<int>vec=q.front();
            q.pop();
            for(auto&p:directions){
                int x=vec[0]+p[0];
                int y=vec[1]+p[1];
                if(x>=m||y>=n||x<0||y<0||grid[x][y]==-1){
                    continue;
                }
                if(grid[x][y]==INF){
                    grid[x][y]=count;
                    q.push({x,y});
                }
            }
        }
    }
   }
    void islandsAndTreasure(vector<vector<int>>& grid) {
 bfs(grid);
    }
};
