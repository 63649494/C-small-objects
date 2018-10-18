#include<stdio.h>
void DtoB(int d) {
    if(d/2)
        DtoB(d/2);
    printf("%d",d%2);
}
int main(){
    int dec;
    scanf("%d",&dec);
    DtoB(dec);
    return 0;
    }
