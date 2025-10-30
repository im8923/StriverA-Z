#include <iostream>
using namespace std;

int numofrotations(int arr[], int size){ // right rotations
    int min=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
            return i;
            
        }
    }
}
int main() {
    int n;
    cout << "number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted and rotated elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = numofrotations(arr, n);
    cout << "The number of rotations is " << result << endl;
}