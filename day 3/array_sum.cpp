#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int sum=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"sum of array elements is "<<sum;
}
