#include <stdio.h>

int main(){
    int integer;
    scanf("%d",&integer);
    if(integer > 0){
        printf("Positive");
    }
    else if(integer < 0){
        printf("Negative");
    }
    else{
        printf("Zero");
    }

    return 0;
}