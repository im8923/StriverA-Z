#include <iostream>
using namespace std; 
int search(int arr[], int n, int key){
    int s=0, e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]>arr[s]){ // left side sorted
            if(key>=arr[s] && key<=arr[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        else{
            if(key>=arr[mid] && key<=arr[e]){ // right side sorted 
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }

        if(arr[mid]==key){
            return mid;
    } 
    } return -1;
}
int main(){
    int n, target;
    cout<< "enter size: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter target element: ";
    cin>>target;
    int result=search(arr,n,target);
    if(result!=-1){
        cout<<result;
    }
    else{
        cout<< -1;
    }
    return 0;
}