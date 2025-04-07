#include<stdio.h>

int findfirstpeak(){
    if(n == 1) return arr[0];
    if(arr[0] > arr[1]) return  arr[0];
    if(arr[n-1] > arr[n-2]) return arr[n-2];


for(int i = 1 ; i < n-1 ; i++){
    if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]){
        return arr[i];
    }
  }
  return -1;
}


int main(){
   int N;
   scanf("%d",&N);
   int arr[n];
   for(int i = 0 ; i<n ; i++){
    scanf("%d",&arr[i]);
   }

    printf("%d",findfirstpeak(arr , N));
    return 0;
}