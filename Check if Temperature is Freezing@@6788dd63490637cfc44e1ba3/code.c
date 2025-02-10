#include <stdio.h>

int main(){
    int temperature;
    printf("Enter temperature in celsius: ");
    scanf("%d", &temperature);

    if(temperature <= 0){
        printf("Freezing\n");
    }
    else{
        printf("Above Freezing\n");
    }
    return 0;
}