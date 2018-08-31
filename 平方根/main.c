#include <math.h>
#include <stdio.h>
double  fun( int  n)
{
    double sum=0.0;
    int i;
    for(i=21;i<=n;i++)
        if((i%3==0)&&(i%7==0))
        sum+=i;
   return sqrt(sum);
}

void main()   /* 主函数 */
{
   printf("s =%f\n", fun ( 1000) );
}


