#include  <stdio.h>
#include  <stdlib.h>
#define   N   15
int  fun( int *s, int x)
{
    int i;
    for(i=0;i<N;i++)
        if(x==s[i])
        return i;
    return -1;
}
void main()
{  int a[N]={ 29,13,5,22,10,9,3,18,22,25,14,15,2,7,27},i,x,index;
   printf("a数组中的数据 :\n");
   for(i=0; i<N; i++)
   printf("%4d",a[i]);  printf("\n");
   printf("给x输入待查找的数 :  ");
   scanf("%d",&x);
   index=fun( a, x );
   printf("index=%d\n",index);
}
