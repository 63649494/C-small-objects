#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void fun(int a[],int n, int *max, int *d)
{
    int i,imax=*a;
    for(i=0;i<n;i++)
        if(imax<*(a+i))
            {imax=*(a+i);
            *d=i+1;
            }
    *max=imax;
}
void main()
{
  int i, x[20], max,  index, n=10;
  int y[20]={4,2,6,8,11,5};
  srand((unsigned)time(NULL));//随机数发生器的初始化函数。
  for(i=0;i<n;i++)
    {
     x[i]=rand()%50;
     printf("%4d",x[i]);    /*输出一个随机数组*/
    }
  printf("\n");
  fun(x,n,&max,&index);
  printf("Max=%5d,Index=%4d\n",max,index);

}
