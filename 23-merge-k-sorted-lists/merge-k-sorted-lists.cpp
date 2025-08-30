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
        return a->val > b->val; // min-heap
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, cmp> pq;
        for (auto node : lists) {
            if (node) pq.push(node);
        }

        ListNode* head = nullptr;  // final head of merged list
        ListNode* tail = nullptr;  // pointer to build the list

        while (!pq.empty()) {
            ListNode* node = pq.top(); 
            pq.pop();

            if (!head) {  
                // First node we pop becomes head
                head = node;
                tail = node;
            } else {
                // Append to the result list
                tail->next = node;
                tail = tail->next;
            }

            if (node->next) pq.push(node->next);
        }

        return head;
    }
};
