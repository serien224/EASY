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
/*�ݹ�ʱ��Ҫ���ף�
����l1: 1 2 3 
����l2: 1 4 5 
l1=Null����l2=Null��ʱ��ֹͣ
l1��l2���ʱ���ѡ��һ��������ѡ��l1��1
l1.next=merge������l1.next(��ʱ�����Ϊ��2��3)��l2��
l1�ƶ���ָ��2
��һ����l1��1���ڶ�����l2��1����������l1��2�����Ĳ���l1��3���������l2��4����������l2��5
4��next��5��3��next��4��5����
*/
