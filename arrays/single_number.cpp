#include<iostream>
using namespace std;

int singlenum(int arr[], int size){
    int result=0;
    for(int i=0;i<size;i++){
        result=result^arr[i];
    }
    return result;
}
int main(){
    int arr[100];
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }   
    cout<<"The single number is: "<<singlenum(arr,size);
}