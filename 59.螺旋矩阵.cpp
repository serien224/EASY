class Solution 
{
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        vector<vector<int>> res(n, vector<int>(n, 0)); // ʹ��vector����һ����ά����
        int startx=0,starty=0;
        int count=1;//ͨ��count++����ÿ��λ�ø�ֵ
        int f=n/2;//ת��Ȧ��
        int t=1;//ÿתһȦt++���������ճ�����λ�ò�����
        int i,j;
        while(f--)//ÿһȦ���������²���
        {
            i=startx,j=starty;
            for(j;j<n-t;j++)
            {
                res[i][j]=count++;
            }//��ѭ��ʱj=n-t,Ҳ���Ǵ��ڶ���λ��
            for(i;i<n-t;i++)
            {
                res[i][j]=count++;
            }
            for(j;j>starty;j--)
            {
                res[i][j]=count++;
            }
            for(i;i>startx;i--)
            {
                res[i][j]=count++;
            }
            startx++;//ÿתһȦ��Ҫ��Ȧ
            starty++;
            t++;
        }
        if(n%2==1) res[n/2][n/2]=count++;
        return res;
    }
};
/*ÿ��תһȦ���������У�һ����n��n�У�ת��Ȧ�Ϳ�n���м���2����n/2
eg: 1  2  3  4 �������ΪתһȦ���ӵ�һ�к͵�����
    12 13 14 5
    11 16 15 6
    10 9  8  7   
  ��nΪ����������Ҫ���м��λ�õ�����ֵ
  �м��λ��Ϊ[n/2][n/2]
  ��Ҫע��ʹ������ҿ��ķ�������Ȼ�������
  ������ֻ�����ϽǶ��㣬���ҵ���ֻ�����ϽǶ���
  ������ֻ�����½Ƕ��㣬������ֻ�����½Ƕ���*/     
