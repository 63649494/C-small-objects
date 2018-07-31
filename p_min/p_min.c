#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#define N 10
//2018/7/31
typedef struct ss
{ char num[10];
  int s;
} STU;
void fun(STU a[], STU *s)
{
  *s=a[0];
  int i;
  for(i=0;i<N;i++)
    if(a[i].s<(*s).s)
        *s=a[i];
}
void main()
{
  STU a[N]={{ "A01",81},{ "A02",89},{ "A03",66},{ "A04",87},{ "A05",77},
  { "A06",90},{ "A07",79},{ "A08",61},{ "A09",80},{ "A10",71}},m;
  int i;
  system("CLS");//执行控制台命令cls，就是CMD下面的cls，功能是清屏，清除所有显示的信息。
  printf("*****The original data*****\n");
  for(i=0;i<N;i++)
    printf("No=%s Mark=%d\n", a[i].num,a[i].s);
  fun(a,&m);
  printf("*****THE RESULT*****\n");
  printf("The lowest :%s, %d\n",m.num,m.s);

}
