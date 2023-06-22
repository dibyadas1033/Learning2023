#include<stdio.h>
void initArr(int [],int);
void reverseArr(int [],int);
void dispArr(int [],int);
void disparr(int *,int);
int main()
{
    int arr[20];
    int size,s=0;
    printf("Enter the size of array:");
    scanf("%d",&size);
    initArr(arr,size);
    dispArr(arr,size);
    reverseArr(arr,size);
    return 0;
}
void initArr(int arr[],int size)
{
    printf("Enter array Elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

}
void dispArr(int arr[],int size)
{
    printf("Array Elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    

}
void reverseArr(int arr[],int size)
{
    int j=size-1, temp;
    for (int i = 0; i < size; i++)
    {
        if (i!=j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j--;
        }
        if (i==j)
        break;
    }
    printf("\n");
    printf("after reverse, Array Elements:\n");
    disparr(arr,size);
    

}
void disparr(int *arr,int size)
{
    for (int  i = 0; i < size; i++)
    {
        printf("%d\t",*(arr+i));
    }
    printf("\n");
}