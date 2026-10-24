#include <stdio.h>

int main(){
    int arr[10];
    int *p = arr;
    int max, min;

    printf("Enter 10 numbers:");
    for (int i=0;i<10;i++){
        scanf("%d", p+i);
    }

    max = *p;
    min = *p;
    for (int i=1;i<10;i++){
        if (*(p + i) >= max){max = *(p+i);}
        if (*(p + i) <= min){min = *(p+i);}
    }
    printf("Largest : %d\n", max);
    printf("Smallest : %d\n", min);
    return 0;
}
