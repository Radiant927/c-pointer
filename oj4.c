#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num[3][3];
    int (*p)[3];
    p=num;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",*(num+i)+j);

    int lst[3][3],(*p2)[3];
    p2=lst;
    for(int k=0;k<3;k++)
        for(int i=0;i<3;i++)
        {
            p2[k][i]=num[i][k];
        }
    for(int m=0;m<3;m++)
    {
        for(int n=0;n<3;n++)
        {
             printf("%d ",p2[m][n]);
        }
            //矩阵转置的核心转置带代码
        printf("\n");
    }
    return 0;
}
