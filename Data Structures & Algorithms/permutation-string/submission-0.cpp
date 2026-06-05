class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        int l=0;
        int r=0;
         if (n > m) return false;
        vector<int>freq(26,0);
        vector<int>mini(26,0);
        for(int j=0;j<n;j++){
            freq[s1[j]-'a']++;
                 mini[s2[j]-'a']++;
            } 
              if(freq==mini){
                return true;
            }
        for(int i=0;i<m-n;i++){
            mini[s2[i]-'a']--;
            mini[s2[i+n]-'a']++;
              if(freq==mini){
                return true;
            }
        }
        return false;
    }
};
