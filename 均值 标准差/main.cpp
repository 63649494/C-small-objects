#include<stdio.h>
#include<math.h>
#define N 5
void fun(int a[]){
    int i,avg,std,m=0,sum=0;
    for(i=0;i<N;i++)
        sum=sum+a[i];
    avg=sum/N;
    for(i=0;i<N;i++)
        m=(a[i]-avg)*(a[i]-avg)+m;
    std=sqrt(m/N);
    printf("这%d个数的均值为%d，标准差为%d",N,avg,std);
    }

int main(){
    int a[N],i;
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N;i++)
        printf("%d",a[i]);
    fun(a);
    return 0;
    }
