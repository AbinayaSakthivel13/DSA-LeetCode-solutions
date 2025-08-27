/*class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for(int num:nums){
            minHeap.push(num);
            if(minHeap.size()>k)
                minHeap.pop();
        }
        return minHeap.top();
    }
};*/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> maxHeap(nums.begin(), nums.end()); // build max-heap
        for (int i = 1; i < k; i++) {
            maxHeap.pop();
        }
        return maxHeap.top();
    }
};
