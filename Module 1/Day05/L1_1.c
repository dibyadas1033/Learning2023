#include<stdio.h>

struct Box {
    int length;
    int width;
    int height;
};

void volume(struct Box *b1)
{
    printf("Volume of the box: %d\n", b1->length * b1->width * b1->height); 
}

void tsa(struct Box *b1)
{
    float result=2*(b1->length*b1->width + b1->width*b1->height + b1->length*b1->height);
    printf("Total surface area of the box: %f",result);
}

int main() {
    struct Box b;
    struct Box *ptr;    // Declare a structure pointer and assign the address of b
    ptr=&b;
    printf("Enter length, width, and height of the box:\n");
    scanf("%d %d %d", &(ptr->length), &(ptr->width), &(ptr->height));
     
    volume(ptr);      // Pass the structure pointer to the volume function

    tsa(ptr);
    
    return 0;
}


// Both the arrow operator (->) and dot operator can be used interchangeably to access the members of a structure using a structure pointer.
