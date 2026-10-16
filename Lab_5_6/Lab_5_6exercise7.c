#include <stdio.h>

int main(){

    float Number_Set[3][4] = {0}, User_Number, avg, sum;
    int i, j;

    printf("Enter 12 numbers between 0 and 99:");
    for (i=0;i<3;i++){
        for (j=0; j<4;j++){
            scanf("%f", &User_Number);

            Number_Set[i][j] = User_Number;
        }
    }
    for (j=0;j<4;j++){
        sum = 0;
        for (i=0;i<3;i++){
            sum += Number_Set[i][j];
        }
        avg = sum / 3.0;
        printf("Average of Column %f is <%f>\n", j+1, avg);
    }
    return 0;
}
