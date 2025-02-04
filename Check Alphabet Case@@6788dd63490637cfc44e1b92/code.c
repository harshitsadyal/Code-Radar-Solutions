#include <stdio.h>

int main(){
    char X;
    scanf("%c",&X);
    if(X >= A && X <= Z) {
        printf("Uppercase");
    }
    else if(X >= a && X <= z){
        printf("Lowercase");
    }

    return 0;
}