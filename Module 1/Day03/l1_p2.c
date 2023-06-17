#include<stdio.h>
void print_bin(unsigned );
int main()
{
    int num;
    printf("Enter Number:");
    scanf("%d",&num);
    printf("binary of %d : ",num);
    print_bin(num);
    printf("\n");
    return 0;
}

void print_bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}
 