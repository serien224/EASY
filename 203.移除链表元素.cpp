/**
 * Definition for singly-linked list.
 * struct ListNode 
 {
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
    ListNode* removeElements(ListNode* head, int val) 
    {
        //若要删除的是头节点，则找不到前驱
        while(head!=NULL&&head->val==val)
        {
            ListNode *temp=head;
            head=head->next;//头节点移到下一个
            delete temp;
        }
        //删除的不是头节点时
        ListNode *cur=head;//临时指针指向头节点
        while(cur!=NULL&&cur->next!=NULL)
        /*cur->next指向cur->next->next(不能为空)，
        如果要删除cur->next,则需要让cur指向cur->next->next*/
        {
            if(cur->next->val==val)
            {
                ListNode *temp=cur->next;
                cur->next=cur->next->next;//删除cur->next节点
                delete temp;
            }
            else cur=cur->next;//向后移一个
        }
        return head;
    }
};
/*删除元素要知道前驱
注意区分一下val，既表示数据域中的值，又在本题中表示要删除的值
需要定义一个类似临时指针的变量来找前驱
注意释放删除节点的内存*/
