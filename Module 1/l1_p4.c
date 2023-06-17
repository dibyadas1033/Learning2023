#include <stdio.h>

int findSmallestDigit(int num) {
    int smallest = 9;
    while (num != 0) {
        int digit = num % 10;
        if (digit < smallest) {
            smallest = digit;
        }
        num /= 10;
    }
    return smallest;
}

int findLargestDigit(int num) {
    int largest = 0;
    while (num != 0) {
        int digit = num % 10;
        if (digit > largest) {
            largest = digit;
        }
        num /= 10;
    }
    return largest;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int i;
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Smallest and largest digits in each number:\n");
    for (i = 0; i < n; i++) {
        if(arr[i]>0 &&arr[i]<9)
        printf("Not Valid \n");
        else
        {
            int smallest = findSmallestDigit(arr[i]);
            int largest = findLargestDigit(arr[i]);
            printf("%d: %d and %d\n", arr[i], smallest, largest);

        }
        
    }

    return 0;
}
