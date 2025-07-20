/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int l=0, r=0;
        vector<int> arr;
        ListNode* l1=head;
        while(l1){
            arr.push_back(l1->val);
            l1=l1->next;
        }
        r=arr.size()-1;
        while(l<=r){
            if(arr[l]==arr[r]){
                l++;
                r--;
            }
            else
                return false;
        }
        return true;
    }
};