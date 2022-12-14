#include<stdio.h>

int num(int a){
    if(a==0) return 0;
    //printf("%d ",a);
    int s=num(a-1);
    return s+a;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",num(n));
return 0;
}
