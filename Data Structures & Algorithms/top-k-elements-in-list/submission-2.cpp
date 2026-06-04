class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int>freq;
// priority_queue<pair<int, int>,vector<pair<int, int>>, greater<pair<int, int>>> min_heap;
for(int x:nums){
    freq[x]++;
}

 int n=nums.size();
// e.g., bucket[3] will hold a list of all numbers that appeared exactly 3 times
        vector<vector<int>> buckets(n + 1);
        for (auto& it : freq) {
            int element = it.first;
            int frequency = it.second;
            buckets[frequency].push_back(element);
        }
       
        // Iterate backwards from the highest possible frequency bucket down to 0
        vector<int> res;
        for (int i = n; i >= 0; i--) {
            for (int num : buckets[i]) {
                res.push_back(num);
                if (res.size() == k) {
                    return res; // We found our top K elements in perfect linear time
                }
    }
        }
        return res;
    }
};
