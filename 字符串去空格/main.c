#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
void fun (char *str)

{
    int i=0;
    char *p=str;
    while(*p)
    {
      if(*p!=' ')  /*删除空格*/
      {
        str[i++]=*p;
       }
      p++;
     }
     str[i]='\0';  /*加上结束符*/
}
void main()
{
  char str[81];
  char Msg[]="Input a string:";
  int n;
  printf(Msg);
  gets(str);
  puts(str);
  fun(str);
  printf("*** str: %s\n",str);
}
