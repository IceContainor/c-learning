#include <stdio.h>

struct point {
    int x;
    int y;
};

void movePoint(struct point *p, int dx, int dy){
    p->x +=dx;
    p->y +=dy;
}

int main(){
    struct point dot={10,20};
    movePoint(&dot, 5, 5);
    printf("%d %d", dot.x, dot.y);
    return 0;
}
