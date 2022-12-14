#include<stdio.h>

int num(int a){
    if(a==0) return 0;
    num(a-1);
    return printf("%d ",a);
}

int main(){
    int n;
    scanf("%d",&n);
    num(n);
return 0;
}
