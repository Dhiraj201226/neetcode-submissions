class Solution {
public:
    void solve(vector<int>& nums,int i,vector<vector<int>>&ans,vector<int>&temp,int sum,int target){
      if(sum==target){
            ans.push_back(temp);
        }
        if(i>=nums.size()){
         return;
        }
          for (int j = i; j < nums.size(); ++j) {
            if (j > i && nums[j] == nums[j-1]) {
                continue; // Skip duplicate
            }
            
            if (sum + nums[j] > target) break; 
        temp.push_back(nums[j]);
        sum+=nums[j];
        solve(nums,j+1,ans,temp,sum,target);
        temp.pop_back();
        sum=sum-nums[j];
        // solve(nums,j+1,ans,temp,sum,target);
    }
    }
    vector<vector<int>>combinationSum2(vector<int>& nums,int target) {
        vector<vector<int>>ans;
        vector<int>temp;
         sort(nums.begin(),nums.end());
        solve(nums,0,ans,temp,0,target);
      return ans;
    }
};