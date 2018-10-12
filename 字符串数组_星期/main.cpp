#include<stdio.h>
int main(){
    char *a[7];
    a[0]="monday";
    a[1]="tuesday";
    a[2]="wednesday";
    a[3]="thursday";
    a[4]="friday";
    a[5]="saturday";
    a[6]="sunday";
    int i;
    scanf("%d",&i);
    printf("%s",a[i-1]);
    }
