// in array of size n, fine a value which occurs twice 

// approach- xor elements by n-1, so all will be cancelled out and duplicate one will be xor'ed thrice, hence giving the number

#include<iostream>
using namespace std;

int duplicate(int arr[], int size){
    int ans=0;
    for(int i=0; i<size;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<size;i++){
        ans=ans^i;
    }
    return ans;
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
    cout<<"Duplicate element is: "<<duplicate(arr,size)<<endl;
    return 0;
}