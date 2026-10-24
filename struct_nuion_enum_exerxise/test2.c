#include <stdio.h>
#define NAME_LEN 30

struct Date {
    int year;
    int month;
    int day;
};

enum Department {CS, EE, ME};

struct Student {
    struct Date date;
    enum Department dept;
    char name[NAME_LEN+1];
    int id;
};

int main()
{
    char *department[3]={"CS", "EE", "ME"};
    struct Student student;
    scanf("%d", &student.date.year);
    scanf("%d", &student.date.month);
    scanf("%d", &student.date.day);
    scanf("%d", &student.id);
    scanf("%s", student.name);
    student.dept = CS;
    printf("%s", student.name);
    printf("%d %d %d", student.date.year, student.date.month, student.date.day);
    printf("%d", student.id);
    printf("%s", department[student.dept]);
    return 0;
}
