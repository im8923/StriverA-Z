// The floor of x is the largest element in the array which is smaller than or equal to x.
// The ceiling of x is the smallest element in the array greater than or equal to x. 

#include <iostream>
using namespace std;

int findfloor(int arr[], int size, int x) {
    int flr = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] <= x && (flr==-1 ||arr[i] > flr))
            flr = arr[i];
    }
    return flr;
}
int findceil(int arr[], int size, int x){
    int ceil=-1;
    for(int i=0;i<size;i++){
        if(arr[i]>=x && (ceil==-1 || arr[i]<ceil))
            ceil=arr[i];
    }
    return ceil;
}
int main() {
    int n;
    cout << "no of elements in array: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cout<<"Enter x: ";
    cin>>x;

   int result= findfloor(arr, n, x);
   cout<<"The floor value is "<< result<<endl;
   int result2= findceil(arr, n, x);
   cout<<"The ceiling value is "<< result2<<endl;

    return 0;
}