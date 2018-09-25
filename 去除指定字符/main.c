#include <stdio.h>
void  fun( char *a, char *h,char *p )
{
    int i=0;
    char *q=a;
    while(q<h){     //第一段*号段
        a[i]=*q;
        q++;
        i++;
        }//前置*号，全部复制；
    while(q<p){     //第二段字符段
        if(*q!='*')
        {
            a[i]=*q;
            i++;
            }//只有不是*号的才会复制
        q++;//始终前进
        }
    while(*q){      //第三段*号段
        {
            a[i]=*q;i++;q++;
            }}

    a[i]='\0';      //加结束符

}

void main()
{  char  s[81],*t, *f;
   printf("Enter a string:\n");gets(s);
   t=f=s;
   while(*t)t++;
   t--;
   while(*t=='*')t--;
   while(*f=='*')f++;
   fun(s,f,t);
   printf("The string after deleted:\n");puts(s);
}
