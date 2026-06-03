class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>sol;
        int n=nums.size();
        priority_queue<pair<int,int>>max_heap;
        for(int i=0;i<n;i++){
            max_heap.push({nums[i],i});
            while(max_heap.top().second<=i-k){
                max_heap.pop();
            }
            if(i+1>=k){
            sol.push_back(max_heap.top().first);
        }
        }
        return sol;
    }
};
