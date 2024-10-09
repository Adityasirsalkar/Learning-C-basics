#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);
    int temp = n;
    int temp1 = n;
    int count =0;
    while(temp!=0){
        temp=temp/10;
        count++;
    }
   
    int arr[count];
    for(int i =0; i<count; i++){
         arr[i]=0;
    }
    for(int i=0; i<count; i++){
       arr[i]=temp1%10;
       temp1= temp1/10;
    }
 
   
    int sum=0;
    for(int i=0; i<count; i++){
       sum = sum + pow(arr[i] , count);
       
    }
    
    if (sum == n){
        printf("It is a armstrong number");
    }
    else if (sum != n){
        printf("It is not a armstrong number");
    }
    return 0;
}