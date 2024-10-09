#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int count=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            count= count+i;
        }
    }
    if(count==n){
        printf("It is a perfect number");
    }
    else if(count!=n){
        printf("It is not a perfect number");
    }
    return 0;
}