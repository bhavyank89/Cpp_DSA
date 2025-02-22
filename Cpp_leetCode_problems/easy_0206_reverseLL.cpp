class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            if (!head) return head;
            
            ListNode* currNode = head;
            ListNode* prevNode = nullptr;
            
            while (currNode != nullptr) {
                ListNode* nextNode = currNode->next;
                currNode->next = prevNode;
                prevNode = currNode;
                currNode = nextNode;
            }
            
            return prevNode; // Fix: Return the new head (prevNode), not currNode
        }
    };
    