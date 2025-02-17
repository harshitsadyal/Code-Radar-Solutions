#include<stdio.h>

int main(){
    int numb1;
    scanf("%d",&numb1);
    if(numb1 & 1){
        printf("Set\n");
    }

    else{
        printf("Not Set");
    }
    return 0;
}