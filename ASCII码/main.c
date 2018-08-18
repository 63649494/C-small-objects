#include <stdio.h>
#include <string.h>

void fun(char  *s, char  t[])
{
    int i,j=0;
    for(i=0;i<strlen(s);i++){
        if(i%2==0){  //下标为偶数
            int x=(int)(*(s+i));
            if(x%2!=0)  //ascii码为奇数
                continue;}
        t[j++]=s[i];
    }
    t[j]='\0';

}

void main()
{
  char   s[100], t[100];
  printf("\nPlease enter string S:"); scanf("%s", s);
  fun(s, t);
  printf("\nThe result is: %s\n", t);
}


