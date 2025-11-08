#include "shape.h"
typedef struct {
    Shape base; // "Inheritance": Circle "is a" Shape
    double radius;
} Circle;

// Circle's declaration of the "methods"
void circle_draw(const Shape* shape);

double circle_area(const Shape* shape);

void circle_destroy(Shape* shape);


// The vtable for Circles (static = encapsulated to this file)
static const ShapeVtable circle_vtable = {
#if defined(_MSC_VER) && _MSC_VER <= 1500  /* MSVC 2008 or earlier*/
    shape_init,      /* init   */
    circle_draw,     /* draw   */
    circle_area,     /* area   */
    shape_close,     /* close  */
    circle_destroy   /* destroy*/
#else
    .init = shape_init,
    .draw = circle_draw,
    .area = circle_area,
    .close = shape_close,
    .destroy = circle_destroy
#endif
};

// "Constructor"
Shape* circle_create(double radius);
