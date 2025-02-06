#include <stdio.h>

int main(){
    int character;
    scanf("%c", &character);
    switch (tolower(character)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
          printf("Vowel");
          break;
        default:
        if((character >= 'a' && character <= 'z') || (character <= 'A' && character >= 'z')){
          printf("Consonant");
        }
        else if(character >= '0' && character <= '9') {
            printf("Digit");
        }
        else{
            printf("special Character");
        }
    
    }

    return 0;
}