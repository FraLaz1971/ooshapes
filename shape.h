#ifndef SHAPE_H
#define SHAPE_H
// Forward declaration
typedef struct Shape Shape;

// Define the "vtable" (Virtual Table) - a struct of function pointers
typedef struct {
    void (*init)(Shape*);
    void (*draw)(const Shape*);
    double (*area)(const Shape*);
    void (*close)(Shape*);
    void (*destroy)(Shape*);
} ShapeVtable;

// The base "class" structure
struct Shape {
    // All shapes will have a pointer to their appropriate vtable
    const ShapeVtable* vtable;
    // Common data for all shapes could go here
    int color;
};
void shape_init(Shape*);
void shape_close(Shape*);

#endif /* SHAPE_H */
