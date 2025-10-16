#include<iostream>
using namespace std;

int zeroestoend(int arr[], int size){
    int j=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<size;i++){
        if(arr[i]!=0){
            swap(arr[i], arr[j]);
            j++;
        }
        }
    }
int main(){
 int nums[100];
 int size;
 cin>> size;
 cout<<"Enter the elements of array: "; 
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }
    zeroestoend( nums,size);
    cout<< "new array is: ";
    for(int i=0;i<size;i++){
        cout<<nums[i]<<" ";
    }
}