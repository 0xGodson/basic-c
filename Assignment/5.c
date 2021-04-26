#include <stdio.h> 

int width = 3;          
int height = 8;         
int area;           
int perimeter;      

void main() {

    perimeter = 2*(height + width);
    area = height * width;

	  printf("Perimeter of the rectangle = %d\n", perimeter);
	  printf("Area of the rectangle = %d\n", area);

}
