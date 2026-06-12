class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>merge;
        int n=intervals.size();
        if(n==0){
            merge.push_back(newInterval);
            return merge;
        }
        int x=newInterval[0];
        int y=newInterval[1];
        int i=0;
    while(i<n && intervals[i][1]<x){
    merge.push_back(intervals[i]);
    i++;
       }
       int start=x;
       if(i<n){
        start=min(intervals[i][0],x);
       }
       int end=y;
    while(i<n && intervals[i][0]<=y){
     end=max(intervals[i][1],end);
     i++;
    }
    merge.push_back({start,end});
    while(i<n){
        merge.push_back(intervals[i]);
        i++;
    }
       
       return merge;
    }
};
