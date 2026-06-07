class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      unordered_map<int,int>freq;
      int n=nums.size();
      if(n<=1){
        return n;
      }
      for(int x:nums){
        freq[x]++;
      }
      int maxi=1;
      for(int i=0;i<n;i++){
        if(freq.find(nums[i]-1)==freq.end()){
            int k=nums[i];
            int length=1;
            while(freq.find(k+1)!=freq.end()){
                length++;
                k++;
                maxi=max(maxi,length);
            }
        }
      }
      return maxi;
    }
};
