class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>res;
        int n=temperatures.size();
        for(int i=0;i<n;i++){
            int count=0;
           int j=i;
           while(j<n && temperatures[i]>=temperatures[j]){
            j++;
            count++;
           }
           if(j==n){
            count=0;
           }
           res.push_back(count);
        }
        return res;
    }
};
