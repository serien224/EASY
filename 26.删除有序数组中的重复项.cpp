int removeDuplicates(int* nums, int numsSize) 
{
    if (numsSize == 0)  return 0;
    int fast = 1, slow = 0;
    while (fast < numsSize) {
        if (nums[fast] != nums[fast - 1]) 
        {
            nums[slow+1] = nums[fast];
            slow++;
        }
        fast++;
    }
    return slow+1;
}
//数组的排列是有序的，重复的数据会相邻
//用下标来发挥指针的作用 
//原地删除重复的数据，因此不能新开一个数组存删除完的元素
