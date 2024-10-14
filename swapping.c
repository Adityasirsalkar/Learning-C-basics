#include<stdio.h>
void using_temp(int *a, int *b){
    int temp =*a;
    *a = *b;
    *b = temp;
}
int main(){
    int n , l;
    scanf("%d%d", &n, &l);
    using_temp(&n ,&l);
    printf("%d %d", n , l);

    l = l+n;
    n = l-n;
    l = l-n;
    printf("\n%d %d", n , l);
}
