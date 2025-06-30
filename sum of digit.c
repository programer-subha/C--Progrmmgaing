// Iterative C Code to find sum of digits

int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {

        // Extract the last digit
        int last = n % 10;

        // Add last digit to sum
        sum = sum+last;

        // Remove the last digit
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    Scanf("%d",&n);
    printf("%d", sumOfDigits(n));
    return 0;
}

