class Solution {
public:
    bool isPossible(vector<int>& piles,int mid,int h){
        int time=0;
        for(int x:piles){
               time +=ceil((double)x/mid);
                if(time>h){
                    return false;
                } 
        }
        return time<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=INT_MIN;
       for(int x:piles){
        if(maxi<x){
            maxi=x;
            }
       } 
       int low=1;
       int high=maxi;
       int ans=-1;
       while(low<=high){
        int mid=low+(high-low)/2;
        if(isPossible(piles,mid,h)){
        ans=mid;
        high=mid-1;
        }
        else{
            low=mid+1;
        }
       }
       return ans;
    }
};
