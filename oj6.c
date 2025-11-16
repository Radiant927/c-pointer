#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fun(char *s);
int main()
{
    char str[100];
    char *p=str;
    scanf("%s",p);
    int res=fun(p);
    if(res==0) printf("YES");
    else printf("NO");
    return 0;
}
int fun(char *s)
{
    char *left=s;
    char *right=s+strlen(s)-1;

    while(left<right)
    {
        if(*left!=*right)
        {
            return -1;
        }
        left++;
        right--;
    }
    return 0;
}
