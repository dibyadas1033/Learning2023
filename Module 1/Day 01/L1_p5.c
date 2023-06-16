#include<stdioL2.h>
int bit_operations(int, int);
int set_bit(int , int );
int clear_bit(int , int );
int toggleBit(int , int );
void print_bin(unsigned );
int main()
{
    int num,op,result;
    printf("Enter Number:");
    scanf("%d",&num);
    printf("Enter oper_type(1,2,3): ");
    scanf(" %d",&op);
    result = bit_operations(num,op);
    printf("Answer : %d\n",result);
    return 0;
}
int bit_operations(int num, int oper_type){
    int res;
    if (oper_type==1)
    {
        printf("binary of %d : ",num);
        print_bin(num);
        printf("\n");
        res  = set_bit(num,1);
        printf("Set 1st bit \n");
        printf("Result : %d\n",res);
        printf("binary of %d : ",res);
        print_bin(res);
        printf("\n");
    }
    else if(oper_type==2)
    {
        printf("binary of %d : ",num);
        print_bin(num);
        printf("\n");
        res  = clear_bit(num,31);
        printf("Clearing 16th bit \n");
         printf("Result : %d\n",res);
        printf("binary of %d : ",res);
        print_bin(res);
        printf("\n");

    }
    else
    {
        printf("binary of %d : ",num); 
        print_bin(num);
        printf("\n");
        res  = toggleBit(num,16);
         printf("Toggling  bit \n");
        printf("Result : %d\n",res);
        printf("binary of %d : ",res);
        print_bin(res);
        printf("\n");


    }
    return res;


}
int set_bit(int n, int k)
{
    return (n | (1 << (k - 1)));
}
int clear_bit(int n, int k)
{
    return (n & (~(1 << (k - 1))));
}
int toggleBit(int n, int k)
{
    return (n ^ (1 << (k-1)));
}
void print_bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}
 