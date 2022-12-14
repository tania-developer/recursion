#include<stdio.h>

int sum(int i, int b[]){
    if(i==0) return 0;
    int s = sum(i-1, b+1);
    return s + b[0];
    }

int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        a[i]= a[i]%10;
    }
    printf("%d",sum(n,a));
//     for(i=0; i<n; i++){
//        printf("%d",a[i]);
//    }
return 0;
}
