#include <stdio.h>

// Structure to represent a complex number
struct Complex {
    float real;
    float imaginary;
};

// Function to read a complex number from the user
void readComplex(struct Complex* c) {
    printf("Enter real part: ");
    scanf("%f", &(c->real));
    printf("Enter imaginary part: ");
    scanf("%f", &(c->imaginary));
}

// Function to write a complex number to the console
void writeComplex(struct Complex c) {
    printf("Complex number: %.2f + %.2fi\n", c.real, c.imaginary);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    result.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
    return result;
}

int main() {
    struct Complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    readComplex(&num1);

    printf("Enter the second complex number:\n");
    readComplex(&num2);

    printf("\n");

    printf("First complex number:\n");
    writeComplex(num1);

    printf("Second complex number:\n");
    writeComplex(num2);

    printf("\n");

    sum = addComplex(num1, num2);
    printf("Sum of the complex numbers:\n");
    writeComplex(sum);

    product = multiplyComplex(num1, num2);
    printf("Product of the complex numbers:\n");
    writeComplex(product);

    return 0;
}
