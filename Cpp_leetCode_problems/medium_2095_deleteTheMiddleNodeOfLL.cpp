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
        ListNode* deleteMiddle(ListNode* head) {
            if(!head || !head->next) return nullptr;
            int length = 0;
            ListNode* temp = head;
            while(temp){
                length ++;
                temp = temp->next;
            }
            temp = head;
            int deleteIndex = length/2;
            for(int i=0;i<deleteIndex-1;i++){
                temp=temp->next;
            }
            ListNode* deleteNode = temp->next;
            temp->next = deleteNode->next;
            deleteNode->next = nullptr;
            delete deleteNode;
            return head;
        }
    };