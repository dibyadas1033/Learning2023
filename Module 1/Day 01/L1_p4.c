#include<stdio.h>
int main()
{
    int op1,op2;
    double ans;
    char operator;
    printf("Enter Number 1:");
    scanf("%d",&op1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c",&operator);
    printf("Enter Number 2:");
    scanf("%d",&op2);
    switch (operator)
    {
    case '+':
        ans = op1 + op2;
        printf("Answer :%lf\n",ans);
        break;
    case '-':
        ans = op1 - op2;
        printf("Answer :%lf\n",ans);
        break;
    case '*':
        ans = op1 * op2;
       printf("Answer :%lf\n",ans);
        break;
    case '/':
        ans = op1 / op2;
        printf("Answer :%lf\n",ans);
        break;
    
    default:
         printf("Error! operator is not correct");
        
    }
    return 0;
}