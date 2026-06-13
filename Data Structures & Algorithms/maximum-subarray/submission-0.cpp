class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int currmax=INT_MIN;
    int maxi=currmax;
    int sum=0;
    for(int x:nums){
        sum+=x;
        currmax=max(x,sum);
        maxi=max(currmax,maxi);
          if(sum<0){
            sum=0;
        }
    }
    return maxi;
    }
};
