#include<stdio.h>

int num(int a){
    if(a==0) return 0;
    printf("%d ",a);
    //num(a-1);
    return num(a-1);
}

int main(){
    int n;
    scanf("%d",&n);
    num(n);
return 0;
}
