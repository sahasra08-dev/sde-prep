#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n,i;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(i=0;i<n;i++){
        if(arr[i]<arr[i-1]){
            cout<<"not sorted";
            break;
        }
    }
    if(i==n){
        cout<<"sorted";

    }
}
