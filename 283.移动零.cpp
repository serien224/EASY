class Solution 
{
public:
    void moveZeroes(vector<int>& nums) 
    {
        int n=nums.size();
        int left=0,right=0;
        while(right<n)
        {
            if(nums[right])
            {
                swap(nums[left],nums[right]);
                //left��right��ʼʱָ�����ͬһ��λ�ã���������㣬�����ֲ���
                left++;
            }
            right++;
            //��0��left��rightͬʱ��ǰָ����һλ
            //����Ϊ0ʱ��right����ǰһλ��Ȼ��right��leftָ�����������0�ͱ�����������
        }
    }
};
