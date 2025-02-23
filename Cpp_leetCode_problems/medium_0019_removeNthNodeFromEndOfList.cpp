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
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            if (!head) return nullptr;  // Edge case: empty list
            
            int length = 0;
            ListNode* temp = head;
            
            // Step 1: Find the length of the linked list
            while (temp) {
                length++;
                temp = temp->next;
            }
            
            int nodeFromFront = length - n;  // Corrected formula
            
            // Step 2: Remove the head node if needed
            if (nodeFromFront == 0) {
                temp = head;
                head = head->next;  
                delete temp;
                return head;
            }
            
            // Step 3: Traverse to the node before the one to be deleted
            temp = head;
            for (int i = 0; i < nodeFromFront - 1; i++) {  
                temp = temp->next;
            }
            
            // Step 4: Delete the target node
            ListNode* nodeToDelete = temp->next;
            temp->next = temp->next->next;
            delete nodeToDelete;
            
            return head;
        }
    };
    