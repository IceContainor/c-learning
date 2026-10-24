#include <stdio.h>

union data{
    int i;
    float f;
    char str[20];
};

int main(){
    union data nums;
    printf("%d\n", sizeof(union data));
    nums.i = 100;
    printf("%d\n", nums.i);
    nums.f = 3.14f;
    printf("%f\n", nums.f);
    printf("%d\n", nums.i);
    return 0;
}
