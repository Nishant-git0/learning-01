#include<iostream>
using namespace std;

// Function with default rate = 8%
float simpleInterest(float P, float T, float R = 8.0) {
    return (P * R * T) / 100;
}

int main() {
    float si1, si2, si3;

    // Customer 1 (uses default rate)
    si1 = simpleInterest(1000, 2);

    // Customer 2 (uses default rate)
    si2 = simpleInterest(2000, 3);

    // Customer 3 (custom rate)
    si3 = simpleInterest(3000, 4, 10);

    cout << "Simple Interest for Customer 1 = " << si1 << endl;
    cout << "Simple Interest for Customer 2 = " << si2 << endl;
    cout << "Simple Interest for Customer 3 = " << si3 << endl;

    return 0;
}