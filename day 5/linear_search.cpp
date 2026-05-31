#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    bool element_found=false;
    for(int i=0;i<n;i++){
      if(arr[i]==key){
        element_found=true;
        cout<<"key element is found at index "<<i;
        break;
      }

    }
    if(element_found==false){
        cout<<"element not found in an array";
    }

}
