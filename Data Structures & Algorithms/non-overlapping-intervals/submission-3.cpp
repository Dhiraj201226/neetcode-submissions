class Solution {
public:
    static bool comp(vector<int>&val1,vector<int>&val2){
        return val1[1]<val2[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        int n=intervals.size();
        int count=0;
        if(n==1){
            return 0;
        }
        for(int i=0;i<n-1;i++){
            int j=i+1;
            while(j<n && intervals[i][1]>intervals[j][0]){
      count++;
      j++;
            } 
         
        i=j-1;
        }
        return count;
    }
};
