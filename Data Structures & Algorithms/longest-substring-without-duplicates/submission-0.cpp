class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int l=0;
        int r=0;
        int ans=0;
        unordered_map<char,int>freq;
        while(r<n){
            if(freq[s[r]]==0){
                freq[s[r]]++;
            }
            else{
                while(l<n && freq[s[r]]!=1){
                    freq[s[l]]--;
                    l++;
                }
            }
            freq[s[r]]++;
            r++;
            ans=max(ans,r-l);
        }
        return ans;
    }
};
