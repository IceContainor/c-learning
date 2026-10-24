#include <stdio.h>
struct Employee {
    char name[30];
    float salary;
};

void raiseSalary (struct Employee *emp, float percontage){
    emp->salary = emp->salary *(1+percontage/100);
}

int main(){
    struct Employee Lee = {"Tom", 100};
    raiseSalary(&Lee, 10.0f);
    printf("%s:%f", Lee.name, Lee.salary);
    return 0;
}
