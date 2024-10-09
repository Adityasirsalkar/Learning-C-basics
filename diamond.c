#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i+2; j++){
            printf("  ");
        }
        for(int j=1; j<=((2*i)-1); j++){
            if(j==1||j==(2*i)-1){
            printf("* ");
            }
            else {
                printf("  ");
            }

        }
        printf("\n");
    }
printf("  ");
     for(int i=0; i<(2*n)+1; i++){
        if(i==0||i==(2*n)){
            printf("* ");
            }
            else {
                printf("  ");
            }
     }
     printf("\n");

       for(int i=n; i>=1; i--){
        for(int j=n-i+2; j>0; j--){
            printf("  ");
        }
        for(int j=1; j<=((2*i)-1); j++){
             if(j==1||j==(2*i)-1){
            printf("* ");
            }
            else {
                printf("  ");
            }

        }
        printf("\n");
    }
}