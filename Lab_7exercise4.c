#include <stdio.h>

void is_prime(int n)
{
    for (int i=2; i*i <= n;i++){
        if (n % i == 0){
            printf("Not prime\n");
            return;
        }
    }
    printf("Is prime");
}

int main()
{
    int Input;
    printf("Enter a number:");
    scanf("%d", &Input);
    is_prime(Input);
    return 0;
}
