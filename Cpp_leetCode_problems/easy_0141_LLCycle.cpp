#include <unordered_map>

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head || !head->next) return false;
        
        unordered_map<ListNode*, int> mpp;
        ListNode* temp = head;
        
        while (temp) {
            if (mpp.find(temp) != mpp.end()) return true; // Cycle detected
            mpp[temp] = 1; // Mark node as visited
            temp = temp->next;
        }
        
        return false; // No cycle found
    }
};
