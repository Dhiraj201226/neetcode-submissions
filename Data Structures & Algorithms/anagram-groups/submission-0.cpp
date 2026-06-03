class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<string> original = strs;
        for(string &s : strs){
            sort(s.begin(), s.end());
        }

        unordered_map<string, vector<int>> mp;
        for(int i=0;i<strs.size();i++){
            mp[strs[i]].push_back(i);
        }
        vector<vector<string>>sol;
      
            for(auto &p : mp){
                      vector<string>sample;
                 for(int idx : p.second){
        sample.push_back(original[idx]);
    }
     sol.push_back(sample);
            }
           
        
        return sol;
    }
};
