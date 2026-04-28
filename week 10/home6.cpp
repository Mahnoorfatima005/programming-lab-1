#include <iostream>
using namespace std;
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}
bool isStrong(int num) {
    int original = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return sum == original;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isStrong(number)) {
        cout << "Strong Number" << endl;
    } else {
        cout << "Not Strong Number" << endl;
    }
    return 0;
}