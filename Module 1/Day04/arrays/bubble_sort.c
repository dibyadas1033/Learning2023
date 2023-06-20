#include<stdio.h>
#include<stdbool.h>
void initArr(int [],int);
void bubbleSort(int[],int);
void disparr(int *,int);
void swap(int*,int*);
int main()
{
    int arr[20];
    int size,s=0;
    printf("Enter the size of array:");
    scanf("%d",&size);
    initArr(arr,size);
    disparr(arr,size);
    bubbleSort(arr,size);
    printf("After sorting: \n");
    disparr(arr,size);
    return 0;
}
void swap(int* a, int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void initArr(int arr[],int size)
{
    printf("Enter array Elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

}
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool flag;
    for (i = 0; i < n - 1; i++) {
        flag = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                flag = true;
            }
        }
        if (flag == false)
            break;
    }
}
void disparr(int *arr,int size)
{
    printf("Array Elements:\n");
    for (int  i = 0; i < size; i++)
    {
        printf("%d\t",*(arr+i));
    }
    printf("\n");
}