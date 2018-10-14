#include<stdio.h>
long fun(long int x)
{ long a,b=0;
a=x;
for(;a!=0;)
    {if((a%10)%2!=0)
	    b=b*10+a%10;
     a/=10;
     }
  return b;
}
void main()
{long a,b;
 printf("Please input a long int num:");
 scanf("%ld",&a);
 b=fun(a);
 printf("b=%ld\n",b);
}
