#include<stdio.h>
int main(){
    int matrix1[3][3];
    int matrix2[3][3];
    printf("Enter the matrix1:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

     printf("Enter the matrix2:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    int ans[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
           ans[i][j]=0;
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                ans[i][j]= ans[i][j] + matrix1[i][k]*matrix2[k][j] ;
            }
        }
    }
  printf("\n The multiplication of both matrix is :\n");
     
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d " , ans[i][j]);
        }
        printf("\n");
    }
}