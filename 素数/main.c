#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int fun(int lim, int aa[MAX])
{
	int i,j,k=0;
	for(i=2;i<=lim;i++)
	{
		for(j=2;j<=i;j++)
			if(i%j==0) break; //i不是素数 跳出
			if(j==i)
			aa[k++]=i; //i是素数 加入aa
	}
	return k;
}
void main()
{
  int limit,i,sum;
  int aa[MAX];
  system("CLS");
  printf("输入一个整数:");
  scanf("%d",&limit);
  sum=fun(limit,aa);        
  for(i=0;i<sum;i++)
     {
      if(i%10==0&&i!=0)    /*每行输出10个数*/
         printf("\n ");
      printf("%5d ",aa[i]);
    }
}
