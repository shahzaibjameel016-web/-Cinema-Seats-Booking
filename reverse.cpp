#include <iostream>
using namespace std;


void reverseArray(int arr[], int n) {
    for(int i = 0; i < n/2; i++) {
    
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}

int main() {
    int arr[] = {4, 3, 6, 2, 9, 0};
    int n = 6;

    cout << "Original array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    reverseArray(arr, n);

    cout << "Reversed array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
