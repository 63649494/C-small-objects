#include  <stdio.h>
double fun(double a[],int n)
{
    double min=0.0,max=0.0,sum=0.0;
    int i;
    for(i=0;i<n;i++){
        if(a[i]<min)
            min=a[i];
        if(a[i]>max)
            max=a[i];
        sum=sum+a[i];
    }
    return (sum-max-min)/(n-2);
}

void main()
{  double  b[10],r;    int  i;
    printf("����10����������b������ :  ");
    for(i=0;i<10;i++)   scanf("%lf",&b[i]);
    printf("�����10��������:");
    for(i=0;i<10;i++) printf("%4.1lf ",b[i]);    printf("\n");
    r=fun(b,10);
    printf("ȥ����߷ֺ���ͷֺ��ƽ����:%f\n",r);
}
