#include<stdio.h>
int fibbonacci(int a){
    if(a<=1){
        return 0;
    }
    else if(a==2){
        return 1;
    }
    else{
        return fibbonacci(a-1) + fibbonacci(a-2);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("%d\t" , fibbonacci(i));

    }
}
// 0 1 1 2 3 5 8 