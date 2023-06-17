#include <stdio.h>

int deleteDigit(int num, int position) {
    int power = 1000;
    int newNum = 0;
    while (power != 0) {
        int digit = num / power;
        if (power != position) {
            newNum = newNum * 10 + digit;
        }
        num %= power;
        power /= 10;
    }
    return newNum;
}

int findLargestNumber(int num) {
    int largest = 0;
    int power = 1000;
    while (power != 0) {
        int newNum = deleteDigit(num, power);
        if (newNum > largest) {
            largest = newNum;
        }
        power /= 10;
    }
    return largest;
}

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    if (number < 1000 || number > 9999) {
        printf("Not a 4-digit number\n");
        return 0;
    }

    int largestNumber = findLargestNumber(number);
    printf("Largest number: %d\n", largestNumber);

    return 0;
}
