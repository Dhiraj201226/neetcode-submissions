class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int, int> mp;
for(int i=0;i<nums.size();i++) {
    mp[nums[i]]=i;
}
        for(int j=0;j<nums.size();j++){
        int s=target-nums[j];
        if(mp.find(s)!=mp.end()){
            if(mp[s]!=j){
            return {min(mp[s],j),max(mp[s],j)};
            }
        }
        }
        return {-1,-1};
    }
};
