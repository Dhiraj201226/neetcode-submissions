class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        unordered_set<string>seen;
        for(int r=0;r<n;r++){
            for(int c=0;c<n;c++){
                  char num=board[r][c];
                  if(num=='.'){
                    continue;
                  }
                  else{
                string row=to_string(num)+"in row"+to_string(r);
                 string col=to_string(num)+"in col"+to_string(c);
                  string box=to_string(num)+"in box"+to_string(r/3)+to_string(c/3);

                  if(seen.find(row)!=seen.end() || seen.find(col)!=seen.end() ||seen.find(box)!=seen.end()){
                    return false;
                  }
                  else{
                    seen.insert(row);
                     seen.insert(col);
                      seen.insert(box);
                  }
                  }
            }
        }
        return true;
    }
};
