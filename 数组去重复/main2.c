#include <stdio.h>
#define N 80

int fun(int a[], int n)
{
    int i,j=1;
    for(i=1;i<n;i++)
    if(a[j-1]!=a[i]) //若该数与前一个数不相同,则要保留
    a[j++]=a[i];
    return j; //返回不相同数的个数
}

void main()
{
  int a[N]={ 2,2,2,3,4,4,5,6,6,6,6,7,7,8,9,9,10,10,10,10}, i, n=20;
  printf("The original data :\n");
  for(i=0; i<n; i++)
     printf("%3d",a[i]);
  n=fun(a,n);
  printf("\n\nThe data after deleted :\n");
  for(i=0; i<n; i++)
     printf("%3d",a[i]);
     }
