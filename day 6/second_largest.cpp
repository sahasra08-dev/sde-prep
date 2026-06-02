#include<iostream>
using namespace std;
int main(){
    int arr[50];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    int second_largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){

            second_largest=largest;
             largest=arr[i];

        }
        else if(arr[i]>second_largest&&largest>second_largest){
            second_largest=arr[i];
        }
    }
    cout<<second_largest;
}
