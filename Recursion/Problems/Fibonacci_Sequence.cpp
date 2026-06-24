#include <iostream>
using namespace std;

int FibonacciSequence(int number) {
    if (number == 0 || number == 1)
        return number;

    return FibonacciSequence(number - 1) + FibonacciSequence(number - 2);
}

int main() {
    int number = 0;

    cout << "Enter A Number: ";
    cin >> number;

    cout << "Fibonacci Number: " << FibonacciSequence(number) << endl;
}