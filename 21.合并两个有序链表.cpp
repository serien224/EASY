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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
	{
    if (l1 == nullptr) 
	{
            return l2;
        } 
		else if (l2 == nullptr) 
		{
            return l1;
        } 
		else if (l1->val < l2->val) 
		{
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        } 
		else 
		{
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
};
/*递归时需要明白，
例子l1: 1 2 3 
例子l2: 1 4 5 
l1=Null或者l2=Null的时候停止
l1和l2相等时随机选择一个，例如选了l1的1
l1.next=merge函数（l1.next(此时里面变为了2和3)，l2）
l1移动到指向2
第一层是l1的1，第二层是l2的1，第三层是l1的2，第四层是l1的3，第五层是l2的4，第六层是l2的5
4的next是5，3的next是4和5……
*/
