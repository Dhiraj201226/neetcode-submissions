class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int j=n-1;
        int i=n-1;
        for(i=n-1;i>=0;i--){
       if(nums[i]>=(j-i))
        j=i;
        }
        return j==0;
    }
};
