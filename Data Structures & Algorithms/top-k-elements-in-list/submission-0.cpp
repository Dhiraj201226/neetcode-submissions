class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int>freq;
priority_queue<pair<int, int>,vector<pair<int, int>>, greater<pair<int, int>>> min_heap;
for(int x:nums){
    freq[x]++;
}
int n=freq.size();
for(auto& it:freq){
    int element=it.first;
    int frequency=it.second;
    min_heap.push({frequency,element});
    if(min_heap.size()>k){
       min_heap.pop();
    }
}
vector<int>res;
while(!min_heap.empty()){
    int val=min_heap.top().second;
    min_heap.pop();
    res.push_back(val);
}
return res;
    }
};
