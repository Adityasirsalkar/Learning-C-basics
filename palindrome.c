#include<stdio.h>
int main(){
    int n;
    
    scanf("%d", &n);
    int t=n;
     int count=0;
    while(n!=0){
         count *= 10;
       count += (n%10);
      
       n = n/10;
    }
  
   if(count==t){
    printf("It is a palindrome number");
   }
   else if(count!=t){
    printf("It is not a palindrome number");
   }
    return 0;
}