int romanToInt(char* s)
{
        int sum=0;
        while(*s)//ʹ��ָ������ƶ�
        {
        if(*s=='V') sum+=5;
        else if(*s=='L') sum+=50;
        else if(*s=='D') sum+=500;
        else if(*s=='M') sum+=1000;
        if(*s=='I')
        {
            if(*(s+1)=='V'||*(s+1)=='X') sum-=1;
            else sum+=1;//I����V��X���ʱ�������ӵ�sum��
        }
        if(*s=='X')
        {
            if(*(s+1)=='L'||*(s+1)=='C') sum-=10;
            else sum+=10;
        }
        if(*s=='C') 
        {
            if(*(s+1)=='D'||*(s+1)=='M') sum-=100;
            else sum+=100;
        }
        s++;
        }
        return sum;    
}
