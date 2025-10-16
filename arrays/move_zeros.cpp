#include <iostream>
using namespace std;

// brute

void array2(int arr[],int size){
    int arr2[100];
    int index=0;

    for(int i=0;i<size;i++){

     if(arr[i]!=0){
        arr2[index]=arr[i];
        index++;
    }
} 
    for(int i=index;i<size;i++){
        arr2[i]=0;
    }
    for(int i=0;i<size;i++){
        arr[i]=arr2[i];
}}

int main(){
    int arr1[100];
    cout<<"Enter the size of array: ";
    int size;
    cin>>size;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        cin>>arr1[i];
    }
    array2(arr1,size);
    cout<<"Array after rotation is: ";
    for(int i=0;i<size;i++){
        cout<<arr1[i]<<" ";
    }
return 0;}