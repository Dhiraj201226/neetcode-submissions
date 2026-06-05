class Solution {
public:
    bool isSafe(vector<string>&board,vector<bool>&queen_main,vector<bool>&queen_anti,int row,int col,int n){
        for(int i=0;i<n;i++){
            if(board[row][i]=='Q'){
                return false;
            }
        }
          for(int j=0;j<n;j++){
            if(board[j][col]=='Q'){
                return false;
            }
        }
        if(queen_main[row+col]==true||queen_anti[row-col+n-1]==true){
            return false;
        }
        return true;
    }
    void solve(vector<string>&board,vector<bool>&queen_main,vector<bool>&queen_anti,int row,int n,vector<vector<string>>&ans){
         if(row==n){
            ans.push_back(board) ;
            return;
         }
        for(int i=0;i<n;i++){
            if(board[row][i]=='.' && isSafe(board,queen_main,queen_anti,row,i,n)){
                board[row][i]='Q';
                queen_main[row+i]=true;
                 queen_anti[row-i+n-1]=true;
                solve(board,queen_main,queen_anti,row+1,n,ans);
                board[row][i]='.';
                  queen_main[row+i]=false;
                 queen_anti[row-i+n-1]=false;
            }
        } 
    }
    vector<vector<string>> solveNQueens(int n) {
       vector<string> board(n, string(n,'.'));
        vector<bool>queen_main(2*n-1,false);
        vector<bool>queen_anti(2*n-1,false);
        vector<vector<string>>ans;
        solve(board,queen_main,queen_anti,0,n,ans);
        return ans;
    }
};
