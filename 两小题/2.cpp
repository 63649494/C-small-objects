#include<stdio.h>
void fun(char *s,char *t,char *p){
    int i,m=0;
        printf("test0\n");
    for(;*t!='\0';t++){
        printf("test1\n");
        for(i=0;*(s+i)!='\0';i++){
            printf("test2\n");
            if(*t==*(s+i)){
                m++;
            }
        }
        if(m==0){
            printf("%c",*t);
            *p=*t;
            p++;
            printf("test3\n");
        }
        m=0;
        }
    }
//123456   56789  789
int main(){
    char s1[50],s2[50],s3[50];
    gets(s1);
    gets(s2);
    fun(s1,s2,s3);
    printf("%s",s3);
    }
