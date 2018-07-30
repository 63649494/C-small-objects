#include<string.h>
#include<stdio.h>
#define N 80
int fun(char *s)
{
    int i,j=0;
    for(i=0;s[i]!='\0';i++)

        if(s[i]!='\0'&&(s[i+1]==' '||s[i+1]=='\0'))
        //判断是否单词结束 
        j++;
    return j;
}

int main()
{
    char line[N];
    int num=0;
    printf("Enter a string:\n");
    gets(line);
    num=fun(line);
    printf("The number of word is:%d\n\n ",num);
    return 0;
}
