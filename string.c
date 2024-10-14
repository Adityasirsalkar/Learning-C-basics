#include<stdio.h>
#include<string.h>
int main(){
    //declaring string
    char s[]= {'a' , 'd', 'i','t','y','a', '\0'};
    char st[]="Aditya";
    //printing entire string
    printf("%s\n",st);
    char strin[100];

    //gets input 
        gets(strin);

        //output 
        puts(strin);

       //input by for loop
        for(int i=0; i<strlen(st); i++){
            printf("%c", s[i]);
        }
        
       //copy to target
        char target[30];
       strcpy(target , st);

       //concatenate
       strcat(target , strin);
       //now target contains target + strin without spaces


       //strcmp
       //ascii value comparison per alphabet
      int a= strcmp("far" , "Joke"); //positive
      int b= strcmp ("Joke" , "far"); //negative
       //0 for equal
       printf("%d %d",a , b);
       
}