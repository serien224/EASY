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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if (!head)//head是空
        {
            return head;
        }
        ListNode* s = head;
        while (s->next) 
        {
            if (s->val == s->next->val)//如果前后两个数相同，删除后面的那个
            {
                s->next = s->next->next;
            }
            else//否则指针后移
            {
                s = s->next;
            }
        }
        return head;
    }
};
