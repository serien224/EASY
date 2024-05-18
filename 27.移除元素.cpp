class Solution 
{
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int n=nums.size();
        int slow=0;
        for(int fast=0;fast<n;fast++)
        {
            if(nums[fast]!=val)//如果不是目标值，就赋值给slow，slow后移一位
            {
                nums[slow]=nums[fast];
                slow++;
            }
            //否则fast后移一位，slow不动
        }
        return slow;//最后slow在的位置就是新数组长度
    }
};
