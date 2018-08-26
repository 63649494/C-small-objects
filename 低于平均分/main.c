#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int fun(int score[],int m, int below[])
{
    int i,j=0;
    float av=0.0;
    for(i=0;i<m;i++)
    av=av+score[i]/m; /*求平均值*/
    for(i=0;i<m;i++)
        if(score[i]<av)
            below[j++]=score[i];
    return j;
}
void main()
{
  int i, n, below[9];
  int score[9]={10,20,30,40,50,60,70,80,90};
  system("CLS");
  n=fun(score, 9, below);
  printf("\nBelow the average score are: ");
  for(i=0;i<n;i++)
     printf("%d ",below[i]);

}
