class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>output(n,1);
        long long pref=1;
        for(int i=0;i<n;i++){
            output[i]=pref;
            pref=pref*nums[i];
        }
        long long suff=1;
        for(int j=n-1;j>=0;j--){
            output[j]=output[j]*suff;
            suff=suff*nums[j];
        }
        return output;
    }
};
