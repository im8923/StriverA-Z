#include<iostream>
using namespace std;
 
int reverse(int arr[], int n){
    int start= 0;
    int end= n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printarr(int arr[], int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
}
int main(){
    int arr[10]={2,4,6,8,10,12,14,16,18,20};
    int size=10;
    reverse(arr,size);
    printarr(arr,size);
    return 0;
}