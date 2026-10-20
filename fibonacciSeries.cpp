#include <iostream>
using namespace std;

void printFibonacci(int n) {
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return;
    }

    int first = 0, second = 1;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        cout << first << " ";
        
        // Calculate the next term and update previous terms
        int nextTerm = first + second;
        first = second;
        second = nextTerm;
    }
    cout << endl;
}

int main() {
    int terms;
    cout << "Enter the number of terms to print: ";
    cin >> terms;

    printFibonacci(terms);

    return 0;
}
