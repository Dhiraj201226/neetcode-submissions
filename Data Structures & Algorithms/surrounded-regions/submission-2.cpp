class Solution {
public:
vector<vector<int>>dir={{0,1},{1,0},{0,-1},{-1,0}};
    void solve(vector<vector<char>>& board){
        int n=board.size();
        int m=board[0].size();
        queue<vector<int>>q;
          vector<vector<int>>res;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(i==0||j==0||i==n-1||j==m-1){
            if(board[i][j]=='O'){
          q.push({i,j});
       board[i][j]='B';
            }
        }
    }
  } 
  while(!q.empty()){
   vector<int>vec=q.front();
   q.pop();
    for(auto&p:dir){
        int x=vec[0]+p[0];
        int y=vec[1]+p[1];
        if(x<n && x>=0 && y>=0 && y<m){
        if(board[x][y]=='O'){
            q.push({x,y});
          board[x][y]='B';
        }
    }
    }
  }
  
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
               if(board[i][j]=='O'){
            board[i][j]='X';
        }
        else if(board[i][j]=='B'){
            board[i][j]='O';
        }
    }
   }   
    }
};
