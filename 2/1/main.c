#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int max = 0;
    int min = 2147483647;
    int i;
    for(i=0;i< n;i++){
        int temp;
        scanf("%d",&temp);
        if(temp>max){
            max=temp;
        }
        if(temp<min){
            min=temp;
        }
    }
    printf("%d %d",max,min);
}