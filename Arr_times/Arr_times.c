#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  N  5
void fun(int a[][N], int m)
{
  int i,j;
  for(i=0;i<N;i++)
    for(j=i;j<N;j++)
      a[i][j]=m*a[i][j];
}
void main()
{
  int a[N][N],m, i, j;
  FILE *out;
  printf("*****The array*****\n");
  for(i=0;i<N;i++)
        { for(j=0;j<N;j++)
        	{a[i][j]=rand()%20;//rand()%20 取0-19的随机数
         	printf("%4d", a[i][j]);
        	}
        printf("\n");
    	}
  m=rand()%4;
  printf("m=%4d\n",m);
  fun(a,m);
  printf("THE RESULT\n");
  for(i=0;i<N;i++)
     { for(j=0;j<N;j++)
          printf("%4d",a[i][j]);
       printf("\n");
     }
}
