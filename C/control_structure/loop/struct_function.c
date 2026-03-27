#include <stdio.h>   // Includes standard input-output functions like printf

// Define a structure named Result
struct Result {
    int sum;        // Variable to store sum
    int product;    // Variable to store product
};

// Function to calculate sum and product of two numbers
struct Result calculate(int a, int b) {
    struct Result r;     // Declare a structure variable r

    r.sum = a + b;       // Calculate sum and store in r.sum
    r.product = a * b;   // Calculate product and store in r.product

    return r;            // Return the structure r
}

int main() {
    // Call function with arguments 5 and 3, store result in res
    struct Result res = calculate(5, 3);

    // Print the sum value
    printf("Sum = %d\n", res.sum);

    // Print the product value
    printf("Product = %d\n", res.product);
    getchar();

    return 0;   // End of program (successful execution)
}