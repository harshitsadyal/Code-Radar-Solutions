#include <stdio.h>

int main(){
    int numb1 , numb2;
    scanf("%d %d", &numb1 ,&numb2);
    if(numb1 < 0 && numb2 < 0){
        printf("True");
    }
    else{
        printf("false");
    }

    return 0;
}