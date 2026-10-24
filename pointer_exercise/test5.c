#include <stdio.h>

void find_min_max(int *arr, int *min, int *max){
    *min=*arr;
    *max=*arr;
    for  (int i=0;i<6;i++){
         if (*(arr+i)>=*max){
            *max=*(arr+i);
         }
         if (*(arr+i)<=*min){
            *min=*(arr+i);
         }
    }
}

int main(){
    int numbers[6]={45, 12, 89, 33, 7, 60};
    int min, max;
    find_min_max(numbers, &min, &max);
    printf("The biggest number is : %d\nThe smallest number is : %d\n", max, min);
    return 0;
}
