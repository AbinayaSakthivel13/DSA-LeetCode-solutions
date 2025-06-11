class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        /*priority_queue<int> maxHeap(nums.begin(),nums.end());
        for(int i=0;i<k-1;i++)
            maxHeap.pop();
        return maxHeap.top();*/
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for(int num: nums){
            minHeap.push(num);
            if(minHeap.size()>k)
                minHeap.pop();
        }
        return minHeap.top();
    }
};