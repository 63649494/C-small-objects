#include  <stdio.h>
int fun(char  *s)
{
   int n=0;
   char *p;
   for(p=s;*p!='\0';p++)
     if((*p>=48)&&(*p<=57))
    //if((*p>='0')&&(*p<='9'))
       n++;
   return n;
}

void main()
{  char *s="2def35adh25  3kjsdf 7/kj8655x";
   printf("%s\n",s);
   printf("%d\n",fun(s));
}
