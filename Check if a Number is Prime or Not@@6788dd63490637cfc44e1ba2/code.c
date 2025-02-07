#include<stdio.h>

int main(){
    int number;
    scanf("%d",&number);
    if(number > 1 && number % 1 == 0 && number % number == 0 ){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }


    return 0;
}