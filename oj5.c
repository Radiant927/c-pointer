#include<stdio.h>
#include<stdlib.h>

int strcmp(char *s1,char *s2);
int main()
{
    char s1[1000],s2[1000];
    char *p1,*p2;
    scanf("%s\n",s1);
    scanf("%s",s2);
    p1=s1,p2=s2;
    int res=strcmp(p1,p2);
    printf("%d",res);

}
int strcmp(char *s1,char *s2)
{
    while(*s1 && *s2 && *s1==*s2)
    {
        s1++;
        s2++;
    }
    return *s1-*s2;
}
