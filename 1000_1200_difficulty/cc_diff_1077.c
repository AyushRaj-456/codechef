#include <stdio.h>

// Function to calculate the digit sum of a number
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t > 0) {
        int n;
        scanf("%d", &n);

        int sumN = digitSum(n); // Calculate digit sum of N

        // Check if n+1 has different parity
        int sumNPlusOne = digitSum(n + 1);
        if ((sumN % 2 == 0 && sumNPlusOne % 2 != 0) || (sumN % 2 != 0 && sumNPlusOne % 2 == 0)) {
            printf("%d\n", n + 1);
        } else {
            printf("%d\n", n + 2);
        }

        t--;
    }

    return 0;
}