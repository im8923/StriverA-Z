#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

   for(int i=0;i<size;i++){
          if(arr[i]== key){
            return 1;
          }
   }
   return 0;
}

int main(){
    int arr[10]={2,4,6,8,10,12,14,16,18,20};
    int size=10;
    int key;
    cout<<"Enter the key to be searched: ";
    cin>>key;

    bool found= search(arr,size,key);
    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is absent"<<endl;
    }
    return 0;
}