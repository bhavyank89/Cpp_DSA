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
        ListNode *detectCycle(ListNode *head) {
            if(!head) return nullptr;
            ListNode* temp = head;
            map<ListNode*,int> mpp;
            while(temp){
                if(mpp.find(temp)!=mpp.end()) return temp;
                mpp[temp]++;
                temp=temp->next;
            }
            return nullptr;
        }
    };