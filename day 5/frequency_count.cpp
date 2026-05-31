#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cin>>num;
    int num_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            num_count++;
        }
    }
    cout<<"frequency of num "<<num_count;

}
