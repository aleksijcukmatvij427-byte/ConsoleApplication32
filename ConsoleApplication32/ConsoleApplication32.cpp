#include <iostream>
#include <climits>
using namespace std;

// Task 1. Function that prints a rectangle of height N and width K
void printRectangle(int N, int K) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Task 2. Function that calculates the factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Task 3. Function that checks if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Task 4. Function that finds min and max (value and index) of an array
void findMinMax(int arr[], int size, int& minVal, int& minIdx, int& maxVal, int& maxIdx) {
    if (size == 0) return;
    minVal = arr[0];
    minIdx = 0;
    maxVal = arr[0];
    maxIdx = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIdx = i;
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIdx = i;
        }
    }
}

// Task 5. Function that returns the cube of a number
double cube(double n) {
    return n * n * n;
}

// Task 6. Function that returns true if positive, false if negative
bool isPositive(double n) {
    return n > 0;
}

int main() {
    // Task 1
    cout << "Task 1. Print Rectangle" << endl;
    int N1, K1;
    cout << "Enter height (N) and width (K): ";
    cin >> N1 >> K1;
    printRectangle(N1, K1);
    cout << endl;

    // Task 2
    cout << "Task 2. Factorial" << endl;
    int num2;
    cout << "Enter a number to find factorial: ";
    cin >> num2;
    cout << num2 << "! = " << factorial(num2) << endl;
    cout << endl;

    // Task 3
    cout << "Task 3. Prime Check" << endl;
    int num3;
    cout << "Enter a number to check if prime: ";
    cin >> num3;
    if (isPrime(num3)) {
        cout << num3 << " is a prime number." << endl;
    }
    else {
        cout << num3 << " is not a prime number." << endl;
    }
    cout << endl;

    // Task 4
    cout << "Task 4. Find Min and Max in Array" << endl;
    int arr4[] = { 45, 12, 89, 3, 67, -5, 34 };
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    int minVal, minIdx, maxVal, maxIdx;
    findMinMax(arr4, size4, minVal, minIdx, maxVal, maxIdx);
    cout << "Array: ";
    for (int i = 0; i < size4; i++) cout << arr4[i] << " ";
    cout << endl;
    cout << "Minimum value: " << minVal << " at index " << minIdx << endl;
    cout << "Maximum value: " << maxVal << " at index " << maxIdx << endl;
    cout << endl;

    // Task 5
    cout << "Task 5. Cube of a Number" << endl;
    double num5;
    cout << "Enter a number to find its cube: ";
    cin >> num5;
    cout << "Cube of " << num5 << " is " << cube(num5) << endl;
    cout << endl;

    // Task 6
    cout << "Task 6. Positive or Negative Check" << endl;
    double num6;
    cout << "Enter a number to check: ";
    cin >> num6;
    if (isPositive(num6)) {
        cout << num6 << " is positive (true)." << endl;
    }
    else {
        cout << num6 << " is negative or zero (false)." << endl;
    }
    cout << endl;

    return 0;
}