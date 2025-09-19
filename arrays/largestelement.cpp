// Given an array of integers nums, return the value of the largest element in the array

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
int main(){
 int nums[100];
 int size;
 cin>> size;
 cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }
    cout<<largestelement( nums,size);
}

