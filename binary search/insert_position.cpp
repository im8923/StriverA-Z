// index of target element if found
#include <iostream>
using namespace std;

int search(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
        else{
            if(arr[i]<key && arr[i+1]>=key){
                return i+1;
            }
            else{
                if(arr[i]>key){
                    return i;
            }
            
            }
        } return size;
    }}

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