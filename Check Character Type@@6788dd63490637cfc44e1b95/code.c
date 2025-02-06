#include <stdio.h>

int main(){
    int character;
    scanf("%c", &character);
    if(character == "a,e,i,o,u"){
        printf("Vowel");
    }
    else if(character != "a,e,i,o,u"){
        printf("Constant");
    }
    else{
        printf("Special character")
    }

    return 0;
}