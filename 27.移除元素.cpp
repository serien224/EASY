class Solution 
{
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int n=nums.size();
        int slow=0;
        for(int fast=0;fast<n;fast++)
        {
            if(nums[fast]!=val)//�������Ŀ��ֵ���͸�ֵ��slow��slow����һλ
            {
                nums[slow]=nums[fast];
                slow++;
            }
            //����fast����һλ��slow����
        }
        return slow;//���slow�ڵ�λ�þ��������鳤��
    }
};
