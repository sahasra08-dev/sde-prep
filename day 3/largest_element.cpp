#include<iostream>
using namespace std;
int main(){
    int arr[50];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"largest element in the array is "<<max;
    return 0;
}
