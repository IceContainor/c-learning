#include <stdio.h>
#include <string.h>

int main(){

    char str[100];                          ///获取字符串
    printf("输入:\n");
    fgets(str,100,stdin);

    char *rev_str;
    rev_str = strrev(str);

    printf("输出:\n");
    printf("原串  :  %s\n", str);         ///反转字符串
    printf("反转： %s\n", rev_str);

    if (strcmp(str, rev_str)==0){       ///比较字符串
        printf("是回文");
    }
    else{
        printf("不是回文");

    }


    return 0;

}
