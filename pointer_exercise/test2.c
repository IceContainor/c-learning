#include <stdio.h>

int main(){
    int arr[5]={1,2,3,4,5}, sum=0;
    int *num = arr;
    while (num < arr+5){
        sum += *num;
        num ++;
    }
    printf("%d", sum);
}
