#include <stdio.h>
#define    N    80
void fun(int  *w, int  p, int  n)
{
    int i,j,b;
    for(i=0;i<=p;i++)
    {
        b=w[0]; //ÿ�εĵ�һ��Ԫ�ر���
        for(j=0;j<n;j++)
        {
            w[j-1]=w[j];  //֮���Ԫ�ض���ǰ�ƶ�һ��
            }
        w[n-1]=b;  //��ԭ���ĵ�һ��Ԫ�ز嵽���
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
            b[i]=*(w+i+p); //ǰp��Ԫ����ǰ�ƶ�
        else b[i]=*(w+(j++));
   printf("\nThe data after moving:\n");
   for(i=0;i<n;i++)printf("%3d",a[i]);
}*/
