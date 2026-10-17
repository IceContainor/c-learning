#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int options; ///声明
    void CalculateAreaRectangles();///函数1声明
    void ConvertSecondsToHoursMinutesSeconds(int x);///函数2声明
    void CalculateAreaTriangleWithUserInput(int x1, int y1, int x2, int y2, int x3, int y3);///函数4声明
    void ConvertNumberToWord(int a);///函数5声明
    ///void CompareDates(char Date1[], char Date2[], char Date3[]);///函数6声明
    ///void ReverseDigits(int n);///函数7声明
    void CheckRepeatedDigits(int n);///函数9声明

    printf("0. Exit\n");
    printf("1. CalculateAreaRectangles\n");
    printf("2. ConvertSecondsToHoursMinutesSeconds\n");
    printf("3. PrintCircle\n");
    printf("4. CalculateAreaTriangleWithUserInput\n");
    printf("5. ConvertNumberToWord\n");
    printf("6. CompareDates\n");                                                ///打印菜单
    printf("7. ReverseDigits\n");
    printf("8. FindHCF_LCM\n");
    printf("9. CheckRepeatedDigits\n");
    printf("10. ComputeCompoundInterest\n");
    printf("11. CheckIfPrime\n");
    printf("12. LinkedListFileMemoryOperations\n\n");

    while (1){         ///程序循环体

        printf("What's your option?");                                          ///获取用户选项
        scanf("%d", &options);
        printf("\n");

        if (options==0){break;}                                                    ///option=0

        if (options==1){                                                                ///option =1
            CalculateAreaRectangles();
        }

        if (options==2){                                                               ///option =2
            int seconds;
            printf("Enter a number:");
            scanf("%d", &seconds);///Get times
            ConvertSecondsToHoursMinutesSeconds(seconds);
        }

        if (options==3){                                                              ///option =3
            int radius, form, feature;
            printf("Enter the radius:");
            scanf("%d", &radius);
            printf("Choose a fill character(0 representing * and 1 representing #):");
            scanf("%d", &form);
            printf("Choose an indicator(0 representing hollow and 1 representing solid):");
            scanf("%d", &feature);

        }

        if (options==4){                                                            ///option =4
            int x1, y1, x2, y2, x3, y3;
            printf("Enter 3 coordinates(Form as follows: x1 y1 x2 y2 x3 y3):");
            scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);///Get coordinates
            CalculateAreaTriangleWithUserInput(x1, y1, x2, y2, x3, y3);
        }

        if (options==5){                                                            ///option=5
            int input, count=1;
            printf("Enter a number:(between -999 and 999)\n");
            while (count==1){
                scanf("%d", &input);
                if ((input>= (-999)) && (input<=999)){
                    break;
                }
                else{printf("This number can't be used.Enter another number.\n");}
            }
            ConvertNumberToWord(input);
        }

        if (options==6){                                                            ///option=6

        }

        if (options==7){                                                            ///option=7

        }

        if (options==8){                                                            ///option=8

        }

        if (options==9){                                                            ///option=9
            int num;
            printf("Enter a number:");
            scanf("%d", &num);
            CheckRepeatedDigits(num);
        }

        if (options==10){                                                            ///option=10

        }

        if (options==11){                                                            ///option=11

        }

        if (options==12){                                                            ///option=12

        }

    }
    printf("See you next time!\n");
    return 0;
}

void CalculateAreaRectangles(){                         ///函数1
    int length1, height1, area1;
    int length2, height2, area2;
    int length3, height3, area3;
    printf("Enter length of rectangle 1 :"); ///get lenghth
    scanf("%d", &length1);
    printf("Enter height of rectangle 1 :");///get height
    scanf("%d", &height1);
    area1 = length1 * height1;///comput the area
    printf("Enter length of rectangle 2 :"); ///get lenghth
    scanf("%d", &length2);
    printf("Enter height of rectangle 2 :");///get height
    scanf("%d", &height2);
    area2 = length2 * height2;///comput the area
    printf("Enter length of rectangle 3 :"); ///get lenghth
    scanf("%d", &length3);
    printf("Enter height of rectangle 3 :");///get height
    scanf("%d", &height3);
    area3 = length3 * height3;///comput the area
    printf("The area of rectangle 1 of length %d and height %d is %d\n", length1, height1, area1);///out put
    printf("The area of rectangle 2 of length %d and height %d is %d\n", length2, height2, area2);///out put
    printf("The area of rectangle 3 of length %d and height %d is %d\n\n", length3, height3, area3);///out put
}

void ConvertSecondsToHoursMinutesSeconds(int x){        ///函数2
    int h, m, s;
    h =x / 3600;///compute the hours
    m = (x % 3600) / 60;///compute the minutes
    s = x % 60;///compute the seconds
    printf("%d seconds is equivalent to %d hours %d minutes %d seconds\n\n", x, h, m, s);///out put
}

void PrintCircle(int a, int b, int c){          ///函数3





}

void CalculateAreaTriangleWithUserInput(int x1, int y1, int x2, int y2, int x3, int y3){      ///函数4
    float area;
    area = abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0;///Calculate
    printf("The area of the triangle is: %f\n\n", area);///Output
}

void Lab4_exercise3(int User){      ///函数5的辅助函数
    char *Second_Number[10]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    char *Third_Number[10]={"  ","one","two","three","four","five","six","seven","eight","nine"};
    int units = User % 10;
    int tens = User / 10;
    if (User == 10)
        printf("Ten");
    else if (User == 11)
        printf("Eleven");
    else if (User == 12)
        printf("Twelve");
    else if (User == 13)
        printf("Thirteen");
    else if (User == 14)
        printf("Fourteen");
    else if (User == 15)
        printf("Fifteen");
    else if (User == 16)
        printf("Sixteen");
    else if (User == 17)
        printf("Seventeen");
    else if (User == 18)
        printf("Eighteen");
    else if (User == 19)
        printf("Nineteen");
    else{
        printf("%s %s", Second_Number[tens], Third_Number[units]);
    }
}
void ConvertNumberToWord(int a){        ///函数5
    int first_number = a/100, User = a%100, second_number = (a%100)/10, third_number = a %10;
    if (a==0){printf("zero");}
    char *first_N[10]={"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine "};
    printf("%s", first_N[first_number]);
    if (first_number != 0){printf("hundred");}
    if ((first_number !=0) && (second_number!=0) && (third_number !=0)){printf(" and ");}
    Lab4_exercise3(User);
    printf("\n");
}

void CompareDates(){      ///函数6

}

void ReverseDigits(){          ///函数7

}

void CheckRepeatedDigits(int n){        ///函数9
    int num_set[10]={0};
    while (n!=0){
        num_set[n%10]++;
        n/=10;
    }
    printf("Digits counts:");
    for (int i=0;i<10;i++){
        if (num_set[i]!=0){
            printf("%d: %d times    ", i, num_set[i]);
        }
    }
    int max_num=0, max_num_times=num_set[0];
    for (int i=1;i<10;i++){
        if (num_set[i] > max_num_times){
            max_num_times = num_set[i];
            max_num = i;
        }
    }
    printf("\n");
    printf("Most repeated digit: %d(%d times)", max_num, max_num_times);
    printf("\n\n");
}
