#include <stdio.h>
void  fun( char *a, char *h,char *p )
{
    int i=0;
    char *q=a;
    while(q<h){     //��һ��*�Ŷ�
        a[i]=*q;
        q++;
        i++;
        }//ǰ��*�ţ�ȫ�����ƣ�
    while(q<p){     //�ڶ����ַ���
        if(*q!='*')
        {
            a[i]=*q;
            i++;
            }//ֻ�в���*�ŵĲŻḴ��
        q++;//ʼ��ǰ��
        }
    while(*q){      //������*�Ŷ�
        {
            a[i]=*q;i++;q++;
            }}

    a[i]='\0';      //�ӽ�����

}

void main()
{  char  s[81],*t, *f;
   printf("Enter a string:\n");gets(s);
   t=f=s;
   while(*t)t++;
   t--;
   while(*t=='*')t--;
   while(*f=='*')f++;
   fun(s,f,t);
   printf("The string after deleted:\n");puts(s);
}
