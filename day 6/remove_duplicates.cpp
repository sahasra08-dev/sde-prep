#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        bool duplicate=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                duplicate=true;
                break;
            }
        }
        if(duplicate==false){
            cout<<arr[i]<<" ";
        }

    }
}
