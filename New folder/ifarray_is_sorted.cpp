// Given an array nums of n integers, return true if the array nums is sorted in non-decreasing order or else false.

#include <iostream>
using namespace std;

bool issorted(int arr[], int size){
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }}
    return true;
}
int main(){
    int nums[100];
    int size;
    cin>> size;
    cout<<"Enter the elements of array: ";
        for(int i=0;i<size;i++){
            cin>>nums[i];
        }
        cout<<issorted(nums,size);
        cout<<endl;
        return 0;
}

