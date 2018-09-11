#include  <stdio.h>
#define    N    20
void  fun( char  *a , char  *s)
{
    while(*s!='\0')
        {*a=*s;
        a++;
        s++;}
        *a='\0';
}

void main()
{  char  s1[N],  *s2="abcdefghijk";
   fun( s1,s2);
   printf("%s\n", s1);
   printf("%s\n", s2);
}
