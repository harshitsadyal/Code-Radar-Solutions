#include <stdio.h>


int main(){
    int number1,number2,number3;
    scanf("%d %d %d", &number1, &number2, &number3);
    if(number1  > number2 && number1 > number3){
        printf(number1);
    }
    else if{number2 > number1 && number2 > number3}{
        printf(number2);
    }
    else{
        printf(number3);
    }

    return 0;
}