#include<stdio.h>
#include<stdlib.h>

void scan(int *p);
void process(int *p);
void prin(int *p);
int main()
{
    int a[10],*p=a;
    scan(p);//不需要int 也不需要*标记,本身已经是指针
    process(p);
    prin(p);
    return 0;
}
void scan(int *p)
{
    for(int i=0;i<10;i++)
    {
       scanf("%d",p+i);
    }
}

void process(int *p)
{
    int min=p[0],min_index=0;
    int  max=p[0],max_index=0;
    for(int i=1;i<10;i++)
    {
        if(p[i]<min)
        {
            min=p[i];
            min_index=i;
        }
    }

    for(int i=1;i<10;i++)
    {
        if(p[i]>max)
        {
            max=p[i];
            max_index=i;
        }
    }
    int t1,t2;
    t1=p[0];
    p[0]=min;
    p[min_index]=t1;

    t2=p[9];
    p[9]=max;
    p[max_index]=t2;
}

void prin(int *p)
{
    for(int i=0;i<10;i++)
    {
        printf("%d ",*p++);
    }
}
