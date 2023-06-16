#include <stdio.h>
#include <stdlib.h>

void initArr(int[],int);
void dispArr(int[],int);
void swap (int *,int *);

int main() {
    int arr[5];
    initArr(arr,5);
    int size = sizeof(arr)/sizeof(arr[0]);
    dispArr(arr,size);
    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        swap
    }

    printf("Sum of alternate elements: %d\n", sum);

    return 0;
}
void initArr(int arr[],int size){
    for (int i=0;i<size;i++)
    {
        arr[i]= rand()%100;
    }
    
}
void dispArr(int arr[],int size)
{
    for (int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);

    }
    printf("\n");

}
void swap(int * p1,int *p2)
{
    int *temp = p1;
    p1 = p2;
    p2 = temp;

}