/**mshapes.c (The "Polymorphic" Client Code)**/
#include <stdio.h>
#include <stdlib.h>
#include "shape.h"
#include "circle.h"

void process_shape(Shape* shape) {
    // This code doesn't need to know if it's a Circle, Square, etc.
    // It just uses the common interface. This is polymorphism!
    double a;
    shape->vtable->init(shape);
    shape->vtable->draw(shape);
    a = shape->vtable->area(shape);
    printf("main::process_shape() Area: %f\n", a);
    shape->vtable->close(shape);
}

int main(int argc,char **argv) {
    Shape* my_circle;
    double radius;
    if (argc<2){
		fprintf(stderr,"usage:%s <radius>\n",argv[0]);
		return 1;
	}
	radius=atof(argv[1]);
    my_circle = circle_create(radius);
    // Shape* my_square = square_create(10.0); // Assume this exists

    process_shape(my_circle); // Will call circle_draw and circle_area
    // process_shape(my_square); // Will call square_draw and square_area

    my_circle->vtable->destroy(my_circle);
    return 0;
}
