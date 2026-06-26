class Solution {
public:
    void solve(vector<int>& nums,int i,set<vector<int>>&ans,vector<int>&temp){
        if(i>=nums.size()){
             ans.insert(temp);
         return;
        }
        temp.push_back(nums[i]);
        solve(nums,i+1,ans,temp);
        temp.pop_back();
        solve(nums,i+1,ans,temp);
        ans.insert(temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        set<vector<int>>ans;
        vector<int>temp;
        solve(nums,0,ans,temp);
        vector<vector<int>>vec(ans.begin(),ans.end());
        return vec;
    }
};
