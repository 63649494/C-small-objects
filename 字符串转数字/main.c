#include   <stdio.h>
#include   <string.h>
long  fun( char  *s )
{
    int len,i;
    long l=0;
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        l=l+*s-48; //把一个数字字符转为相应的数字，只要用它的ASCII码减去48即可
        l=l*10;
        s++;
        }
    return l;
}
void main()
{  char  s[10];
   long  r;
   printf("请输入一个长度不超过9个字符的数字字符串 :  ");  gets(s);
   r=fun(s);
   printf("r = %ld\n",r);
}
