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
        //��Ҫɾ������ͷ�ڵ㣬���Ҳ���ǰ��
        while(head!=NULL&&head->val==val)
        {
            ListNode *temp=head;
            head=head->next;//ͷ�ڵ��Ƶ���һ��
            delete temp;
        }
        //ɾ���Ĳ���ͷ�ڵ�ʱ
        ListNode *cur=head;//��ʱָ��ָ��ͷ�ڵ�
        while(cur!=NULL&&cur->next!=NULL)
        /*cur->nextָ��cur->next->next(����Ϊ��)��
        ���Ҫɾ��cur->next,����Ҫ��curָ��cur->next->next*/
        {
            if(cur->next->val==val)
            {
                ListNode *temp=cur->next;
                cur->next=cur->next->next;//ɾ��cur->next�ڵ�
                delete temp;
            }
            else cur=cur->next;//�����һ��
        }
        return head;
    }
};
/*ɾ��Ԫ��Ҫ֪��ǰ��
ע������һ��val���ȱ�ʾ�������е�ֵ�����ڱ����б�ʾҪɾ����ֵ
��Ҫ����һ��������ʱָ��ı�������ǰ��
ע���ͷ�ɾ���ڵ���ڴ�*/
