#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
double fun(int n)
{
    double i;
    double sum=0.0;
    for(i=1.0;i<=n;i++)
        sum=sum+1.0/(i*(i+1.0));
    return sum;
}
void main()
{
  printf("%f\n",fun(10));
}
