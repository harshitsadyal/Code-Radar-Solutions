#include <stdio.h>

int main(){ 
    int costPrice, SellingPrice;
    scanf("%d %d",&costPrice , &SellingPrice);

    int difference  = SellingPrice - costPrice;

    if(difference > 0){
        printf("Profit");
    }
    else if(difference < 0){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }


    return 0;
}