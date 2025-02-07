#include <stdio.h>

int main(){
    int number, Divisor;
    scanf("%d %d",&number,&Divisor);
    if(number % Divisor == 0){
        printf("Yes");
    }
    else{
        printf("No")
    }

    return 0;
}
