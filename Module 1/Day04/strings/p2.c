#include <stdio.h>
#include <stdlib.h>
  
int main()
{
    char str[100];
    int i=0;
    printf("Enter the string:");
    scanf("%s",str);
    int n1 = atoi(str);
  
    printf("output:%d\n", n1);
    int n = 0;
  
    // converting string to number
    for (int i = 0; str[i] != '\0'; i++) {
        n = n * 10 + (str[i] - 48);
    }
    printf("output using loops :%d\n", n);

 
  
    return 0;
}