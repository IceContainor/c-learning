#include <stdio.h>

void mysort(int num[], int n)
{
    int res = 1, count = 0;
    while (res==1){
        count = 0;
        for (int i=0;i<n-1;i++){
            if (num[i] > num[i+1]){
                int a = num [i];
                num[i]=num[i+1];
                num[i+1]=a;
                count++;
            }
        }
        if (count == 0){
            res =0;
        }
    }
}

int main()
{
    int numset[10]={0}, num;
    printf("Enter 10 numbers:");
    for (int i=0;i<10;i++){
        scanf("%d", &num);
        numset[i]=num;
    }
    mysort(numset, 10);
    printf("In sorted order: ");
    for (int i=0;i<10;i++){
        printf("%d ", numset[i]);
    }
    printf(" \n");
}
