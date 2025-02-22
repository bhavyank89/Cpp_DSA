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
        ListNode* middleNode(ListNode* head) {
            if(!head) return head;
            int length = 0;
            ListNode* temp = head;
            while(temp){
                length++;
                temp = temp->next;
            }
            int pos = length/2;
            temp = head;
            int count = 0;
            while(count<pos){
                temp = temp->next;
                count++;
            }
            return temp;
        }
    };