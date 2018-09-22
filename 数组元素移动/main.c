#include <stdio.h>
#define    N    80
void fun(int  *w, int  p, int  n)
{
    int i,j,b;
    for(i=0;i<=p;i++)
    {
        b=w[0]; //每次的第一个元素备份
        for(j=0;j<n;j++)
        {
            w[j-1]=w[j];  //之后的元素都向前移动一个
            }
        w[n-1]=b;  //把原来的第一个元素插到最后
        }
}
void main()
{  int  a[N]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
   int  i,p,n=15;
   printf("The original data:\n");
   for(i=0; i<n; i++)printf("%3d",a[i]);
   printf("\n\nEnter  p:");scanf("%d",&p);
   fun(a,p,n);
   printf("\nThe data after moving:\n");
   for(i=0;i<n;i++)printf("%3d",a[i]);
}

/*void fun(int  *w, int  p, int  n)
{
    int i,j=0;
    int b[n];
    for(i=0;*(w+i)!='\0';i++)
        if(i<(n-p))
            b[i]=*(w+i+p); //前p个元素向前移动
        else b[i]=*(w+(j++));
   printf("\nThe data after moving:\n");
   for(i=0;i<n;i++)printf("%3d",a[i]);
}*/
