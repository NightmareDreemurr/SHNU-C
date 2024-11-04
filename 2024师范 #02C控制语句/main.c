//
// Created by kcalb on 2024/11/3.
//
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int max = 2147483647;
    int min = 0;
    int i;
    for(i=0;i<n;i++){
      scanf("%d",&n);
      if(n>max){
        max=n;
      }
      if(n<min){
        min=n;
      }
      printf("%d %d",max,min);
    }
}