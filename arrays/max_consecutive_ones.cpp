#include <iostream>
using namespace std;

int countones(int arr[], int size){
    int count=0;
    int maxcount=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            count++;
            maxcount=max(maxcount,count);
        }
        else{
            count=0;
        }
    }
    return maxcount;

}

int main(){
    int arr1[100];
    cout<<"Enter the size of array: ";
    int size;
    cin>>size;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        cin>>arr1[i];
    }
    int result=countones(arr1,size);
    cout<<"Maximum consecutive ones are: "<<result;
}