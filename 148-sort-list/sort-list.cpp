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
    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
            return head;
        ListNode* mid=findmid(head);
        ListNode* temp=mid->next;
        mid->next=NULL;
        ListNode *head1=sortList(head);
        ListNode *head2=sortList(temp);
        return mergeTwoList(head1, head2);
    }
    ListNode* findmid(ListNode* temp){
        ListNode* slow=temp;
        ListNode* fast=temp->next;
        while(fast && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* mergeTwoList(ListNode* l1, ListNode* l2){
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        if(l1->val > l2->val)
            return mergeTwoList(l2,l1);
        ListNode*head=l1;
        while(l1->next && l2!=nullptr){
            if(l1->next->val > l2->val){
                ListNode* temp2=l2;
                l2=l2->next;
                ListNode* temp1=l1->next;
                l1->next=temp2;
                temp2->next=temp1;
                l1=l1->next;
            }
            else
                l1=l1->next;
        }
        while(l2!=nullptr){
            ListNode* temp2=l2;
            l2=l2->next;
            ListNode* temp1=l1->next;
            l1->next=temp2;
            temp2->next=temp1;
            l1=l1->next;
        }
        return head;
    }
};