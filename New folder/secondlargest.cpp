// Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist,
// return -1.

#include<iostream>
using namespace std;

int largestelement(int arr[], int size){
 int max= arr[0];
 for(int i=0;i<size;i++){
  if(arr[i]>max){
     max = arr[i];
  }
 }
 return max;
}
int secondlargest(int arr[], int size){
    int max= largestelement(arr,size);
    int second = -1;   // start with -1 to handle "not found" case
    bool found = false;
    for(int i=0;i<size;i++){
        if(arr[i]!=max){
            if(!found){
                second = arr[i];
                found = true;
            }
            else if(arr[i]>second){
                second = arr[i];
            }
        }
    }
    return second;
}
int main(){
 int nums[100];
 int size;
 cin>> size;
 cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }
    cout<<secondlargest( nums,size);
}