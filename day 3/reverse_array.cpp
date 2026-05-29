#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n,temp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
