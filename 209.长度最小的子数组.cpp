class Solution 
{
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int n=nums.size();
        int i=0;//��ʼλ��
        int sum=0;
        int total=0,result=INT32_MAX;//��������
        for(int j=0;j<n;j++)//j������ֹλ��
        {
            sum+=nums[j];//������Ԫ�صĺ�
            while(sum>=target)//����Ŀ��ֵʱ����ʼλ���ƶ�
            {
                total=j-i+1;
                result=min(total,result);//�ҵ���С��total
                sum=sum-nums[i];//��ʼָ����ƺ󣬼�ȥ��ʼָ���Ԫ��
                i++;
            }
        }
        return result==INT32_MAX?0:result;
    }
};
/*�������ڵ�˼�룺��������е�Ԫ�غʹ���target����ʼָ�����
������forѭ�������˸��Ӷ�*/
