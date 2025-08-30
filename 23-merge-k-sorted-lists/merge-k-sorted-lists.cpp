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
struct cmp {
    bool operator()(ListNode* a, ListNode* b) const {
        return a->val > b->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, cmp> pq;
        for (auto node : lists) {
            if (node) pq.push(node);
        }
        ListNode* head = nullptr;  
        ListNode* tail = nullptr;  
        while (!pq.empty()) {
            ListNode* node = pq.top(); 
            pq.pop();
            if (!head) {  
                head = node;
                tail = node;
            } else {
                tail->next = node;
                tail = tail->next;
            }
            if (node->next) pq.push(node->next);
        }

        return head;
    }
};
