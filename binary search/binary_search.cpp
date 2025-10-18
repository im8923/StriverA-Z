#include <iostream>
using namespace std;    
 int binary(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid= start + (end - start) / 2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid= start + (end - start) / 2;
    }
    return -1;
}
int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target element to search: ";
    cin >> target;
    int result = binary(arr, n, target);
    if (result != -1) {
        cout << "Element " << target << " found at index " << result << ".\n";
    } else {
        cout << "Element " << target << " not found in the array.\n";
    }
    return 0;
}
