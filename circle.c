#include <stdio.h>
#include <stdlib.h>
#include "shape.h"
#include "circle.h"

// Circle's implementation of the "methods"
void circle_draw(const Shape* shape) {
    const Circle* self = (const Circle*)shape; // Downcast
    printf("circle_draw() Drawing a circle with radius %f\n", self->radius);
}

double circle_area(const Shape* shape) {
    const Circle* self = (const Circle*)shape;
    return 3.14159 * self->radius * self->radius;
}

void circle_destroy(Shape* shape) {
    Circle* self = (Circle*)shape;
    free(self);
}

// "Constructor"
Shape* circle_create(double radius) {
    Circle* circle = malloc(sizeof(Circle));
    circle->base.vtable = &circle_vtable; // Crucial: link to Circle's behavior
    circle->base.color = 0;
    circle->radius = radius;
    return (Shape*)circle; // Upcast to the base type
}
