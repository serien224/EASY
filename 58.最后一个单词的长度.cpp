class Solution 
{
public:
    int lengthOfLastWord(string s) 
    {
        int len;
        len=s.size();
        int sum=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=' ') sum++;
            else if(sum!=0) break;//�������һ����ĸ���пո�
        }
        return sum;
    }
};
