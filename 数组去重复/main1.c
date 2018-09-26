#include <stdio.h>
#define N 80

int CompactIntegers(int a[],int M){
    int j=0;
    int i;
    for(i=0;i<M;i++){
        if(a[i]!=0){
        a[j]=a[i];
        j++;
        }
    }
    return j;
}


int fun(int a[], int n)
{
    int i,j=0,k=0;
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(a[j]==a[i])
                a[j]=0;  //用0替代重复元素
    n=CompactIntegers(a,n); //去0
    return n;
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
