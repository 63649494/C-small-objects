#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
void fun(int m,int k,int xx[])
{
    int i,j,n;
    for(i=m+1,n=0;n<k;i++)
        {
            for(j=2;j<=i;j++)
			if(i%j==0) break; //i不是素数 跳出
			if(j==i)
			xx[n++]=i; //i是素数 加入xx
            }
}
void main()
{
  int m,n,zz[1000];
  system("CLS");
  printf("\nPlease enter two integers: ");
  scanf("%d%d",&m,&n);
  fun(m, n, zz);
  for(m=0;m<n;m++)
     printf("%d ",zz[m]);
  printf("\n ");
}
