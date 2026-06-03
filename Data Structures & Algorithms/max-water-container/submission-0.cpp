class Solution {
public:
    int maxArea(vector<int>& heights) {
          int n=heights.size();
        int maxi=0;
        int r=n-1;
        int l=0;
        while(l<r){
            long long area=(r-l)*min(heights[l],heights[r]);
            maxi=max(maxi,(int)area);
            if(heights[l]<heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxi;
    }
};
