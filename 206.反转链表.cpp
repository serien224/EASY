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
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* temp;
        ListNode* cur=head;//初始化
        ListNode* pre=NULL;
        while(cur)//cur指向最后一个空位置为终止条件
        {
            temp=cur->next;
            cur->next=pre;//反转方向
            pre=cur;//如果先让cur右移，则会丢失cur位置，pre无法跟着右移
            cur=temp;
        }
        return pre;
    }
};
/*反转链表使用双指针的解法
cur指针和pre指针来改变链表的方向，pre在cur的左边，
两个指针一起不断右移就可以改变链表的方向
临时指针temp在赋值前保存cur右边的位置，不然cur指向pre后，cur的右边位置无法寻找*/
