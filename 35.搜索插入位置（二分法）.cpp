class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int left = 0, right = n - 1, ans = n;
        //ans��ʼֵΪn����targetΪ���ֱ�Ӽӵ�����ĩβ
        while (left <= right) 
        {
            int mid = (left+right)/2;
            if (target <= nums[mid]) 
            {
                ans=mid;
                right = mid - 1;
            } 
            else 
            {
                left = mid + 1;
            }
        }
        return ans;
    }
};
//ע�������ģ���ö��ַ�
