#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Point creatpoint(int x, int y){
    struct Point dot;
    dot.x = x;
    dot.y = y;
    return dot;
}

void movePoint(struct Point *dot, int dx, int dy){
    dot->x += dx;
    dot->y += dy;
}

void printPoint(struct Point dot){
    printf("The position of the point is (%d, %d)\n\n", dot.x, dot.y);
}

int main(){
    struct Point point1;
    int x, y;
    printf("Enter the location of the point :\n");
    scanf("%d %d", &x, &y);
    point1 = creatpoint(x, y);
    printPoint(point1);

    int dx, dy;
    printf("Enter the position you want to move:\n");
    scanf("%d %d", &dx, &dy);
    movePoint(&point1, dx, dy);
    printPoint(point1);

    return 0;
}
