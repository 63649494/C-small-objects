#include <stdio.h>
void fun(int  a, int  b, long  *c)
{
    int a1=(a/10)%10;    //a的十位
    int b1=(b/10)%10;    //b的十位
    int a2=a%10;    //a的个位
    int b2=b%10;    //b的个位
    *c=a2*1000+b2*100+a1*10+b1;

}
void main()
{  int  a,b; long  c;void NONO ();
   printf("Input a, b:");
   scanf("%d%d", &a, &b);
   fun(a, b, &c);
   printf("The result is: %ld\n", c);
}


