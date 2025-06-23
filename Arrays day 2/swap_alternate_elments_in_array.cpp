#include <iostream>
using namespace std;

void printarray(int arr[], int size) {
    for (int i = 0; i < size; i++) { // corrected i < n → i < size
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int n) {
    for (int i = 0; i < n; i += 2) {
        if (i + 1 < n) {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    swapAlternate(arr, n);
    cout << "The array after swapping alternate elements is: ";
    printarray(arr, n);

    return 0;
}
