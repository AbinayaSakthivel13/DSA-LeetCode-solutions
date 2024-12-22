class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        /*vector<int> neg; vector<int> pos; vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
                pos.push_back(nums[i]);
            else
                neg.push_back(nums[i]);
        }
        int pos_ind=0,neg_ind=0;
        while(neg_ind<nums.size()/2){
            ans.push_back(pos[pos_ind++]);
            ans.push_back(neg[neg_ind++]);
        }
        return ans;*/
        vector<int> ans(nums.size(),0);
        int pos=0,neg=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[pos]=nums[i];
                pos+=2;
            }
            else{
                ans[neg]=nums[i];
                neg+=2;
            }
        }
        return ans;
    }
};