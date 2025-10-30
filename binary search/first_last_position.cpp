// leetcode 34 again 

#include <iostream>
using namespace std;
 int firstPosition(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1; // Key not found
}
int lastposition(int arr[], int size, int key) {
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1; // Key not found
}
int main() {
    int n, target;
    cout << "number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "target element: ";
    cin >> target;

    int first = firstPosition(arr, n, target);
    int last = lastposition(arr, n, target);

        cout << "The first position of " << target << " is " << first << endl;
        cout << "The last position of " << target << " is " << last << endl;
    }


   