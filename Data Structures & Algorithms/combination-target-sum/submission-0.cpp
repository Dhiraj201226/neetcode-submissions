class Solution {
public:
    void solve(vector<int>& nums,int i,set<vector<int>>&ans,vector<int>&temp,int sum,int target){
         if(sum==target){
            ans.insert(temp);
            return;
        }
        if(sum>target || i>=nums.size()){
          
         return;
        }
        temp.push_back(nums[i]);
        sum+=nums[i];
      
        solve(nums,i,ans,temp,sum,target);
        temp.pop_back();
        sum=sum-nums[i];
        solve(nums,i+1,ans,temp,sum,target);
    }
    vector<vector<int>>combinationSum(vector<int>& nums,int target) {
        set<vector<int>>ans;
        vector<int>temp;
        solve(nums,0,ans,temp,0,target);
        vector<vector<int>>vec(ans.begin(),ans.end());
        return vec;
    }
};
