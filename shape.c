#include <stdio.h>
#include "shape.h"

void shape_init(Shape* shape){
	fprintf(stderr,"shape_init() initing shape object\n");
	/* do something */
}
void shape_close(Shape* shape){
	fprintf(stderr,"shape_close() terminating shape object\n");
	/* do something */
}
