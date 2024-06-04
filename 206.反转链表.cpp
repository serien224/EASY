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
        ListNode* cur=head;//��ʼ��
        ListNode* pre=NULL;
        while(cur)//curָ�����һ����λ��Ϊ��ֹ����
        {
            temp=cur->next;
            cur->next=pre;//��ת����
            pre=cur;//�������cur���ƣ���ᶪʧcurλ�ã�pre�޷���������
            cur=temp;
        }
        return pre;
    }
};
/*��ת����ʹ��˫ָ��Ľⷨ
curָ���preָ�����ı�����ķ���pre��cur����ߣ�
����ָ��һ�𲻶����ƾͿ��Ըı�����ķ���
��ʱָ��temp�ڸ�ֵǰ����cur�ұߵ�λ�ã���Ȼcurָ��pre��cur���ұ�λ���޷�Ѱ��*/
