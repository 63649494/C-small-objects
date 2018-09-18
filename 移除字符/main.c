#include <stdio.h>
#include <string.h>
#define LEN 20

void fun(char a[],char b[],int n)
{
    int i,j=0;
    for(i=0;a[i]!='\0';i++)
        if(i==n-1)
        continue;
        else b[j++]=a[i];
    b[j]='\0';
}

void main( )
{   char str1[LEN],str2[LEN] ;
    int n;
    printf("Enter the string:\n") ;
    gets(str1) ;
    printf("Enter the position of the string deleted:") ;
    scanf("%d",&n) ;
    fun(str1,str2,n) ;
    printf("The new string is: %s\n",str2);
}
