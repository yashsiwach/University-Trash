#include <iostream>

using namespace std;

// Function to calculate the binomial coefficient (n choose k)
int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

// Function to calculate the sum of binomial coefficients up to N
int sumOfBinomialCoefficients(int N) {
    int sum = 0;
    for (int k = 0; k <= N; k++) {
        sum += binomialCoefficient(N, k);
    }
    return sum;
}

int main() {
    int N;
    cin >> N;
    
    int result = sumOfBinomialCoefficients(N);
    cout << result << endl;
    
    return 0;
}
