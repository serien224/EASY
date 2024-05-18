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
//���������������ģ��ظ������ݻ�����
//���±�������ָ������� 
//ԭ��ɾ���ظ������ݣ���˲����¿�һ�������ɾ�����Ԫ��
