#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define  N  5
double fun (int w[][N])
{
 double sum=0.0;
 int i,j;
 for(i=0;i<N;i++)
    sum=sum+w[i][0]+w[i][N-1];
 for(j=1;j<N-1;j++)
    sum=sum+w[0][j]+w[N-1][j];
 int z=2*N+2*(N-2);
 return sum/z;
}
void main()
{
  int a[N][N]={0,1,2,7,9,1,9,7,4,5,2,3,8,3,1,4,5,6,8,2,5,9,1,4,1};
  int i, j;
  double s;
  system("CLS");
  printf("*****The array*****\n ");
  for (i=0; i<N; i++)
    { for (j=0;j<N;j++)
         {printf("%4d ",a[i][j]);}
      printf("\n ");
    }
  s=fun(a);
  printf("*****THE RESULT*****\n ");
  printf("The sum is : %lf\n ",s);

}
