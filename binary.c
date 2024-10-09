#include<stdio.h>
int main(){
    int n; 
    scanf("%d", &n);
    int binary=1;
    for(int i=0; n!=0; i++){
        binary = binary*10;
        binary += (n%2);
        n = n/2;
    }
    
    printf("%d\n" , binary);
    int temp=0;
    while(binary!=0){
        temp= temp*10;
        temp= temp+ (binary%10);
        binary = binary/10;
    }
    printf("%d\n",temp);
    temp = (temp-1)/10;
    printf("%d" , temp);

}