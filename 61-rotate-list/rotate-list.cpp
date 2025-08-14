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
    ListNode* rotateRight(ListNode* head, int k) {
        int size=0;
        if(!head)
            return head;
        ListNode* temp=head;
        while(temp){
            size++;
            temp=temp->next;
        }
        int swap=k%size;
        while(swap--){
            temp=head;
            ListNode* start=head, *prev=head, *cur=head->next;
            while(cur->next){
                prev=prev->next;
                cur=cur->next;
            }
            cur->next=head;
            prev->next=nullptr;
            head=cur;
        }
        return head;
    }
};