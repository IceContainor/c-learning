#include <stdio.h>

enum ShapeType {CIRCLE, RECTANGLE};

struct shape{
    int color;
    enum ShapeType type;
    union {
        struct {float radius;} circle;
        struct {float hight, width;} rectangle;
    }data;
};

float getArea(struct shape s){
    if (s.type == CIRCLE){
        return 3.1415926f * s.data.circle.radius * s.data.circle.radius;
    }
    if (s.type == RECTANGLE){
        return s.data.rectangle.width * s.data.rectangle.hight;
    }
    return 0.0f;
}

int main(){
    struct shape s1 = { .type = CIRCLE, .color = 1, .data.circle.radius = 2.0f };
    struct shape s2 = { .type = RECTANGLE, .color = 2, .data.rectangle = {3.0f, 4.0f} };
    struct shape s3 = { .type = CIRCLE, .color = 1, .data.circle.radius = 5.0f };

    printf("Shape 1 Area: %.2f\n", getArea(s1));
    printf("Shape 2 Area: %.2f\n", getArea(s2));
    printf("Shape 3 Area: %.2f\n", getArea(s3));
    return 0;
}
