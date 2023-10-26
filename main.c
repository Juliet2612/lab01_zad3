#include <stdio.h>

double calculatePi(int n) {
    double pi = 0.0;
    int sign = 1;
    for (int i = 0; i < n; i++) {
        pi += sign * 4.0 / (2 * i + 1);
        sign *= -1;
    }
    return pi;
}

int main() {
    int iterations = 10000; // You can adjust the number of iterations for better accuracy
    double pi = calculatePi(iterations);
    printf("Approximation of pi: %f\n", pi);
    return 0;
}