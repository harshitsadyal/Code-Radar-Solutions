#include<stdio.h>

int main(){
    int number;
    scanf("%d",&number);
    if(number << 31){
        printf("Set\n");
    }
    else{
        printf("Not Set\n");
    }
    return 0;
}