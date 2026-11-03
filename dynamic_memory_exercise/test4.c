#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    double score;
} Student;

int main(void) {
    int n;
    printf("Enter the quantity of students:");
    scanf("%d", &n);
    printf("\n");

    Student *students_info = (Student *)malloc(sizeof(Student)*n);
    if (students_info==NULL) {
        printf("The memory can't be allocated!");
        return 1;
    }

    for (int i=0;i<n;i++) {
        int id;
        double score;
        printf("Enter the ID of student %d : ", i+1);
        scanf("%d", &id);
        students_info[i].id = id;
        printf("Enter the score of student%d : ", i+1);
        scanf("%lf", &score);
        students_info[i].score = score;
        printf("\n");
    }

    printf("==========STUDENT INFOMATION==========\n");
    for (int i=0;i<n;i++) {
        printf("student%d\nID:%d\nScore:%lf\n\n", i+1, students_info[i].id, students_info[i].score);
    }
    printf("=======================================\n");

    double sum = 0;
    for (int i=0;i<n;i++) {
        sum += students_info[i].score;
    }

    printf("The average score of this class is: %lf", sum/(double)n);

    free(students_info);
    students_info = NULL;

    return 0;
}
