#include <stdio.h>
void toggleCase(char* )
int main() {
    char str[200];
    printf("Enter a string: ");
    scanf("%s",str);
    printf("Before: %s\n", str);
    toggleCase(str);
    printf("After:  %s\n", str);
    
    return 0;
}
void toggleCase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
           
            str[i] = str[i] + ('a' - 'A');
            
        } else if (str[i] >= 'a' && str[i] <= 'z') {
           
            str[i] = str[i] - ('a' - 'A');
        }
    }
}
