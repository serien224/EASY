class Solution 
{
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int n=nums.size();
        int i=0;//起始位置
        int sum=0;
        int total=0,result=INT32_MAX;//计数长度
        for(int j=0;j<n;j++)//j代表终止位置
        {
            sum+=nums[j];//集合中元素的和
            while(sum>=target)//大于目标值时，起始位置移动
            {
                total=j-i+1;
                result=min(total,result);//找到最小的total
                sum=sum-nums[i];//起始指针后移后，减去起始指针的元素
                i++;
            }
        }
        return result==INT32_MAX?0:result;
    }
};
/*滑动窗口的思想：如果集合中的元素和大于target后，起始指针后移
比两个for循环减少了复杂度*/
