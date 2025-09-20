// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

#include<iostream>
using namespace std;

// brute force 

/*void rotate(int arr[], int size, int k){

    k=k%size; // in case k>size
    int temp= arr[size-1];
    for(int i=size-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}*/

// O(n) time 

void reverse(int arr[], int n){
    
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void rotate(int arr[], int n,int k){
    k=k%n; // in case k>n
    reverse(arr,n);
    reverse(arr, k);
    reverse(arr+k, n-k);

}

int main(){
    int arr[100];
    cout<<"Enter the size of array: ";
    int size;
    cin>>size;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of k: ";
    int k;
    cin>>k;
    rotate(arr,size,k);
    cout<<"Array after rotation is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}