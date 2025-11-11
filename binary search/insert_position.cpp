// index of target element if found
#include <iostream>
using namespace std;

int search(int arr[], int size, int key){

  int s=0;
    int e=size-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return s;
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

    int result = search(arr, n, target);
    cout << "The insert position for " << target << " is " << result << endl;

    return 0;
}