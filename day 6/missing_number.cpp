#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool correct=true;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]+1){
            cout<<"missing number is "<<arr[i-1]+1;
            correct=false;
            break;

        }

    }
    if(correct==true){
        cout<<"there are no missing numbers in the array";
    }
}
