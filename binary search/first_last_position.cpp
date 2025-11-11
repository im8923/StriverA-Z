// to get count of occurances, just do last-first +1 after this code 

#include <iostream>
using namespace std;
 int firstOccur(int arr[], int n, int key) {
   int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }else if(arr[mid]<key){
            s=mid+1;
        }else if(arr[mid]>key){
            e=mid-1;
        }
        mid= s+(e-s)/2;
    }
    return ans;
}
 int lastOccur(int arr[], int n, int key) {
   int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }else if(arr[mid]<key){
            s=mid+1;
        }else if(arr[mid]>key){
            e=mid-1;
        }
        mid= s+(e-s)/2;
    }
    return ans;
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

    int first = firstOccur(arr, n, target);
    int last = lastOccur(arr, n, target);

        cout << "The first position of " << target << " is " << first << endl;
        cout << "The last position of " << target << " is " << last << endl;
    }


   