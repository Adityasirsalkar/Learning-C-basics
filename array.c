#include<stdio.h>
int main(){
    int n; 
    printf("Enter the number of elements in array: ");
    scanf("%d" , &n);
    int arr[n];
    printf("Enter the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int t;
    printf("Enter the position of new element :");
    scanf("%d" , &t);
    int l;
    printf("Enter the element:");
    scanf("%d" , &l);
    n++;
    for (int i=n; i>t-1; i--){
        arr[i]=arr[i-1];
    }
    arr[t-1]=l;
    printf("\n");
    for(int i=0; i<n;i++ ){
        printf("%d ", arr[i]);
    }
}