#include<stdio.h>
#include<math.h>
int main(){
    int n;
     scanf("%d", &n);
     int temp =n;
     int count = 0;
     while (temp!=0){
        temp= temp/10;
        count++;
        
        
        
     }
     int n1 =0;
    while(n!=0){
        n1=n1*10;
        n1= n1+ (n%10);
       n = n/10;
    }
    
    int decimal=0;
    for(int i=1; i<=count;i++){
        int a = pow(2 , count-i);

        decimal += a*(n1%10);
        n1= n1/10;
    
    }
printf("%d" , decimal);
}