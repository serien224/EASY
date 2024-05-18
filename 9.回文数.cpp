class Solution
{
public:
    bool isPalindrome(int x) 
    {
        int a[10000]={0};
        int i=0;
        int m=0;
        if(x<0) return false;
        else
        {
            while(x!=0)
            {
                a[i]=x%10;
                x/=10;
                i++;
            }
            for(int j=0;j<i;j++)
            {
                if(a[j]!=a[i-1-j])
                {
                    m=1;
                    break;
                }
                else m=0;
            }
            if(m==1) return false;
            else return true;
        }
    }
};

