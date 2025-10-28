//  find the first and smallest index in a sorted array where the 
//value at that index is greater than or equal to a given key.

#include <iostream>
using namespace std;

int lowerbound(int arr[], int size, int key){
    int m=0;
    for(int i=0;i<size;i++){
        if(arr[i]>=key){
            return i;
        }
        m++;
    } return m;
    // If no such index is found, return the size of the array.
    return size;
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

    int result = lowerbound(arr, n, target);
    cout << "The lower bound index for " << target << " is " << result << endl;
}
