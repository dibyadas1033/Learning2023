#include<stdio.h>
int main()
{
    int arr[20];
    int size,s=0;
    printf("Enter the size of array:");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        s = s + arr[i];
    }
    printf("Sum of Elements:%d",s);
    printf("Avg of Elements:%d",s/size);
    return 0;
}