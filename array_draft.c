#include <stdio.h>
int main(){
    int User_Number, i, j, res=0, res_n=0;
    printf("Enter a number:");
    scanf("%d", &User_Number);
    int leng = 0;
    int copy = User_Number;
    while (copy!=0){
        copy/=10;
        leng++;
    }
    int num_set[leng];
    for (i=0;i<leng;i++){
            num_set[i]=0;
    }
    for (i=0;i<leng;i++){
        num_set[i] = User_Number%10;
        User_Number /= 10;
    }
    int num_set_copy[leng];
    for (i=0;i<leng;i++){
            num_set_copy[i]=0;
    }
    for (i=0;i<leng;i++){num_set_copy[i]=num_set[i];}

    for (i=0;i <leng/2;i++){
        num_set[i]=num_set_copy[leng-1-i];
        num_set[leng-1-i]=num_set_copy[i];
    }
    for (i=0;i<leng;i++){
        for (j=i+1;j<leng;j++){
            if (num_set[i]==num_set[j]){
                res = 1;
                res_n = num_set[i];
                break;
            }
        }
        break;
    }
    if (res){printf("第一个重复的数字是：%d", res_n);}
    else{printf("None");}
    return 0;
}
