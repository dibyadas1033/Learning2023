#include <stdio.h>
int getValue(char);
int main() 
{
    char ch;
    printf(" enter the charcter:");
    scanf(" %c",&ch);
    int val = getValue(ch);
    if(val==1)
    printf("Vowel");
    else
    printf("Not a Vowel\n");

    
    return 0;
}

int getValue(char ch) 
{
    int res;

    switch(ch) {
        case 'a':
            res = 1;
            break;
        case 'e':
            res = 1;
            break;
        case 'i':
            res = 1;
            break;
        case 'o':
            res = 1;
            break;
        case 'u':
            res = 1;
            break;
        case 'A':
            res = 1;
            break;
        case 'E':
            res = 1;
            break;
        case 'I':
            res = 1;
            break;
        case 'O':
            res = 1;
            break;
        case 'U':
            res = 1;
            break;
        
        default:
            res = 0; // An invalid score, you can choose how to handle it
    }

    return res;
}

