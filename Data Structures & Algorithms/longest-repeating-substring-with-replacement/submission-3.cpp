class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int m=k;
        int l=0;
        int r=0;
        int ans=0;
        int max_f=0;
        unordered_map<char,int>freq;
        while(r<n){
          freq[s[r]]++;
          max_f=max(max_f,freq[s[r]]);
          int window_len=r-l+1;
            while(l<n && window_len-max_f>k){
                freq[s[l]]--;
                if(freq.size()==0){
                    freq.erase(s[l]);
                }
                l++;
        window_len=r-l+1;
          }
          ans=max(ans,r-l+1);
          r++;
        }
        return ans;
    }
};
