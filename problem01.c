#include<stdio.h>

int pow_func(int i, int j){
    if(j==0) return 1;
    int mul=pow_func(i,j-1) ;
    return mul*i;
}

int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    printf("%d",pow_func(n,m));
return 0;
}
