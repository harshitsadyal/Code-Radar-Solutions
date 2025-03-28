// Your code here...
#include<stdio.h>

int main(){
    int Player;
    scanf("%d",&Player);
    for(int i = 0 ; i <= Player ; i++){
        for(int j = 1 ; j <= i ; j++){
            print("* ");
        }
        print("\n");
    }
    return 0;
}