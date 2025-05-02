//a number that has exactly two factors, one and itself is called a prime number

//7,13,5,19,23,29,37
//brute force---> initial algo that comes to our find, which has highest time complexity

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    } else if (n == 2) {
        isPrime = true;
    } else if (n % 2 == 0) {
        isPrime = false;
    } else {
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << n << " is a prime number.\n";
    else
        cout << n << " is not a prime number.\n";

    return 0;
}
