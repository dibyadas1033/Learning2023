#include <stdio.h>
int findCharType(char);
int main() 
{
    char ch;
    int val;
    printf(" enter a charcter:");
    scanf(" %c",&ch);
    val = findCharType(ch);
    if (val = 1)
    printf("Uppercase Alphabet");
    else if (val = 2)
    printf("Lowercase Alphabet");
    else if (val = 3)
    printf("Digit");
    else if (val = 4)
    printf("Other printable symbols");
    else 
    printf("Non printable symbol");


    
    return 0;
}

int findCharType(char ch) 
{
    int res ;
     if (ch >= 'A' && ch <= 'Z') {
        res = 1;
    } else if (ch >= 'a' && ch<= 'z') {
        res =  2;
    } else if (ch >= '0' && ch <= '9') {
        res = 3;
    } else if (ch >= 32 && ch <= 126) {
        res = 4;
    }
    else
        res =5;

    return res;
}

