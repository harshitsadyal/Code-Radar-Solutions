#include <stdio.h>

int main(){
    int Day;
    scanf("%d",&Day);
    if(Day == 1){
        printf("Monday");
    }
    else if(Day == 2){
        printf("Tuesday");
    }
    else if(Day == 3){
        printf("Wednesday");
    }
    else if(Day == 4){
        printf("Thrusday");
    }
    else if(Day == 5){
        printf("Friday");
    }
    else if(Day == 6){
        printf("Saturday");
    }
    else{
        printf("Sunday");
    }
    return 0;
}