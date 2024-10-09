#include<stdio.h>
int main(){
    int a ,b;
    scanf("%d%d", &a , &b); 
    for(int i=a; i<=b; i++){
        int count=0;
        for(int j=2; j<i; j++){
            if(i%j==0){
                count++;
            }

        }
        if(count==0){
            printf("%d ", i);
        }
    }
}