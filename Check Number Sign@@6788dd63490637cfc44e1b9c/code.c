#include <stdio.h>


int main(){
    int Number;
    scanf("%d",&Number);
    if(Number > 0){
        printf("Positive");
    }
    else if(Number < 0){
        printf("Negative");
    }
    else{
        printf("Zero");
    }


    return 0;
}