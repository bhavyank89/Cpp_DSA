/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    public:
        ListNode* findCollision(ListNode* t1, ListNode* t2, int d) {  // Fix return type (was missing '*')
            while (d > 0) {  // Fix condition (should be d > 0, not d >= 1)
                t1 = t1->next;
                d--;
            }
            while (t1 && t2) {
                if (t1 == t2) return t1;
                t1 = t1->next;
                t2 = t2->next;
            }
            return nullptr;
        }
    
        ListNode* getIntersectionNode(ListNode *headA, ListNode *headB) {
            int n1 = 0, n2 = 0;
            ListNode* temp1 = headA;
            ListNode* temp2 = headB;
    
            while (temp1) {  // Count nodes in list A
                n1++;
                temp1 = temp1->next;
            }
            while (temp2) {  // Count nodes in list B
                n2++;
                temp2 = temp2->next;
            }
    
            if (n1 > n2) return findCollision(headA, headB, n1 - n2);
            else return findCollision(headB, headA, n2 - n1);
        }
    };
    