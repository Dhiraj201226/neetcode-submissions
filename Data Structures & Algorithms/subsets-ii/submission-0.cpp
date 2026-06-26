class Solution {
public:
     void solve(vector<int>& nums,int i,set<vector<int>>&ans,vector<int>&temp){
        if(i>=nums.size()){
        ans.insert(temp);
         return;
        }
        for (int j = i; j < nums.size(); ++j) {
            if (j > i && nums[j] == nums[j-1]) {
                continue;
            }
        temp.push_back(nums[j]);
        solve(nums,j+1,ans,temp);
        temp.pop_back();
        solve(nums,j+1,ans,temp);
        ans.insert(temp);
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>ans;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        solve(nums,0,ans,temp);
        vector<vector<int>>vec(ans.begin(),ans.end());
        return vec;
    }
};
