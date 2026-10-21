#include <stdio.h>
#include <string.h>

#define FIRST_NAME_LEN 40
#define LAST_NAME_LEN 40

struct student_name{                            ///struct
    char first[FIRST_NAME_LEN+1];
    char initial;
    char last[LAST_NAME_LEN+1];
};

struct student {                                ///struct
    struct student_name name;
    int id, age;
}student1, student2;

struct student builde_info(const char first[], const char initial, const char last[], int id, int age){  ///function
    struct student s;
    strcpy(s.name.first, first);
    s.name.initial = initial;
    strcpy(s.name.last, last);
    s.id = id;
    s.age = age;
    return s;
}

void print_info(struct student std){
    printf("Name : %s %c %s\n", std.name.first, std.name.initial, std.name.last);
    printf("ID : %d\n", std.id);
    printf("Age : %d\n", std.age);
    printf("\n")
}

int main()
{
    struct student student1 = builde_info("Michael", 'K', "Jackson", 528, 20);
    struct student student2 = builde_info("Michael", 'K', "Jackson", 528, 20);
    print_info(student1);
    print_info(student2);
    return 0;
}
