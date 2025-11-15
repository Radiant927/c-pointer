#include<stdio.h>
#include<stdlib.h>
void swap(int *n1,int *n2);
int main()
{
    int a,b,c,*p1,*p2,*p3;
    scanf("%d %d %d",&a,&b,&c);
    p1=&a;
    p2=&b;
    p3=&c;
    if(*p2<*p1){swap(p1,p2);}
    if(*p3<*p1){swap(p3,p1);}
    if(*p3<*p2){swap(p3,p2);}
    printf("%d %d %d",*p1,*p2,*p3);
}
void swap(int *n1,int *n2)
{
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
}
