class Solution 
{
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        vector<vector<int>> res(n, vector<int>(n, 0)); // 使用vector定义一个二维数组
        int startx=0,starty=0;
        int count=1;//通过count++来给每个位置赋值
        int f=n/2;//转的圈数
        int t=1;//每转一圈t++，依次来空出顶点位置不处理
        int i,j;
        while(f--)//每一圈都进行以下操作
        {
            i=startx,j=starty;
            for(j;j<n-t;j++)
            {
                res[i][j]=count++;
            }//出循环时j=n-t,也就是处于顶点位置
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
            startx++;//每转一圈都要缩圈
            starty++;
            t++;
        }
        if(n%2==1) res[n/2][n/2]=count++;
        return res;
    }
};
/*每次转一圈就增加两行，一共是n行n列，转几圈就看n里有几个2，用n/2
eg: 1  2  3  4 可以理解为转一圈增加第一行和第四行
    12 13 14 5
    11 16 15 6
    10 9  8  7   
  若n为奇数，则需要把中间的位置单独赋值
  中间的位置为[n/2][n/2]
  需要注意使用左闭右开的方法，不然结点会混乱
  最上行只管左上角顶点，最右的列只管右上角顶点
  最下行只管右下角顶点，最左列只管左下角顶点*/     
