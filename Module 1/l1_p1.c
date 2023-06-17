#include<stdio.h>
void f1(int); // to print 1 to n
void f2(int);  // to print space
void f3(int);  // to print n to 1
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Pattern:\n");
    
        for(int j=num;j>0;j--)
        {
            // printf("j: %d\n",j);
            f1(j);
            f2(2*(num-j));
            f3(j);
            printf("\n");
        }
    return 0;
}
void f1(int n){
    for(int i=1;i<=n;i++)
    {
        printf("%d",i);

    }
    
}
void f3(int n){
    //  printf("%d",n);
    for(int i=n;i>0;i--)
    {
       
        printf("%d",i);

    }
    
}
void f2(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf(" ");
    }
    
}