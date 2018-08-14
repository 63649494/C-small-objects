#include <stdio.h>
#define N 80
int fun(char *str)
{
    int i=0,j;
    while(*(str+i)!='\0')
        i++;
    printf("longth is %d\n",i);
    for(j=0;j<(i/2);j++){   //中间的不是终止条件而是符合条件
        if(str[j]==str[i-j-1])
        ;
        else return 0;}
    return 1;
}

void main()
{
	 char s[N];
	 int i;
	 printf("Enter a string : ");
	 gets(s);
	 printf("\n\n");
	 puts(s);
	 if(fun(s))
		printf("YES\n");
	 else
		printf("NO\n");
}
