#include <stdio.h>
#include <string.h>
#define FIRST_NAME_LEN 40
#define SECOND_NAME_LEN 40

struct student_name{
    char first[FIRST_NAME_LEN+1];
    char initial;
    char second[SECOND_NAME_LEN+1];
};

struct student {
    struct student_name name;
    int id;
};

struct student get_info(char first[], char initial, char second[], int id){
    struct student student_n;
    strcpy(student_n.name.first, first);
    student_n.name.initial = initial;
    strcpy(student_n.name.second, second);
    student_n.id = id;
    return student_n;
}

void prt_info(struct student student_n){
    printf("%s %c %s\n", student_n.name.first, student_n.name.initial, student_n.name.second);
    printf("%d\n\n", student_n.id);
}

int main()
{
    struct student student_[10];
    char *first[10]={"","BBBB", "CCCC", "DDDD", "EEEE", "FFFF", "GGGG", "HHHH", "IIII", "JJJJ"};
    student_[0] = (struct student){.name.first="AAAA", .name.initial = 'C', .name.second="gulp", .id=114514};
    for (int i=1;i<10;i++){
        student_[i]=student_[i-1];
        student_[i].id++;
        strcpy(student_[i].name.first, first[i]);
    }
    for (int i=0;i<10;i++){
        prt_info(student_[i]);
    }
    return 0;
}
