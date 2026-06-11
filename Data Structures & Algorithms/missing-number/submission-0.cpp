class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        for(int x:nums){
            maxi+=x;
        }
        int sum=n*(n+1)/2;
        return sum-maxi;
    }
};
