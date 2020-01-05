//
// Created by SirMathhman on 1/5/2020.
//

#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "Core.h"

typedef Instance Point;
float ZERO = 0;

Point Point_(float *x, float *y) {
    Point point = instance(2);
    point[0] = x;
    point[1] = y;
    return point;
}

float Point_getX(Point instance) {
    return *((float *) instance[0]);
}

float Point_getY(Point instance) {
    return *((float *) instance[1]);
}

float Point_distance(Point instance, Point other) {
    float deltaX = Point_getX(instance) - Point_getX(other);
    float deltaY = Point_getY(instance) - Point_getY(other);
    float xSquared = powf(deltaX, 2);
    float ySquared = powf(deltaY, 2);
    return sqrtf(xSquared + ySquared);
}

void Point$(Point instance) {
    free(instance);
}

Point Point_Origin() {
    return Point_(&ZERO, &ZERO);
}

int main() {
    float x = 3;
    float y = 4;
    Point point = Point_(&x, &y);
    Point other = Point_Origin();
    float distance = Point_distance(point, other);
    printf("%f", distance);

    Point$(point);
    Point$(other);
    return 0;
}
