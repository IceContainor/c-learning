#include <stdio.h>

enum Weekday {Mon = 1, TUE, WED, THU, FRI, SAT, SUN};

void printDayType(enum Weekday day){
    switch(day) {
    case Mon:
    case TUE:
    case WED:
    case THU:
    case FRI:
        printf("Workday\n");
        break;
    case SAT:
    case SUN:
        printf("Weekend\n");
        break;
    default :
        printf("Invalid day\n");
    }
}

int main(){
    printDayType(Mon);
    printDayType((enum Weekday)8);
    return 0;
}
