#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include<string.h>
void swap(void* p1, void* p2, size_t size) 
{
    char* temp = (char*)malloc(size);
    memcpy(temp, p1, size);
    memcpy(p1, p2, size);
    memcpy(p2, temp, size);
    free(temp);
    //the memcpy function is used to copy the data from src to destination
    // memcpy is declared in string.h header file
    //The size_t data type in C is an unsigned integer type used to represent the size of objects in bytes.
}

int main() 
{
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y, sizeof(int));
    printf("After swap: x = %d, y = %d\n", x, y);

    double a = 3.14, b = 2.25;
    printf("Before swap: a = %lf, b = %lf\n", a, b);
    swap(&a, &b, sizeof(double));
    printf("After swap: a = %lf, b = %lf\n", a, b);

    char c1 = 'A', c2 = 'Z';
    printf("Before swap: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(char));
    printf("After swap: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}
