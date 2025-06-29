class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<int> res;
        priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        for(int num:nums)
            freq[num]++;
        for(auto pair: freq){
            int num=pair.first;
            int count=pair.second;
            minHeap.push({count, num});
            if(minHeap.size()>k)
                minHeap.pop();
        }
        while(!minHeap.empty()){
            res.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return res;
    }
};