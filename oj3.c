#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cal(char *p);
int main()
{
    char str[100],*p;
    p=str;
    while((*p=getchar())!='\n' && *p !=EOF)
    {
        p++;
    }
    *p='\0';
    p=str;//代码复位：上面的代码，指针移到最右边，此时计算长度永远都是0
    //为什么能这么做？因为p在循环过程中一直在移动，当退出循环时，指针已经移到了末尾。
    int res=cal(p);
    printf("%d",res);
}
int cal(char *p)
{
    int len=strlen(p);
    return len;
}
