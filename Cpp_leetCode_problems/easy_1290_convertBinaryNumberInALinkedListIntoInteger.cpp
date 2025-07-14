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
class Solution
{
public:
    int getDecimalValue(ListNode *head)
    {
        ListNode *temp = head;
        ListNode *prev = nullptr;
        while (temp)
        {
            ListNode *next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        head = prev;
        int exp = 0;
        int ans = 0;
        while (head)
        {
            ans += head->val * pow(2, exp);
            exp++;
            head = head->next;
        }
        return ans;
    }
};