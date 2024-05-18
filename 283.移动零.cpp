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
                //left和right开始时指向的是同一个位置，如果不是零，则数字不变
                left++;
            }
            right++;
            //非0：left和right同时往前指向下一位
            //此数为0时，right先往前一位，然后right和left指向的数互换，0就被换到后面了
        }
    }
};
