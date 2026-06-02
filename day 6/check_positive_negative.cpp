#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int positive=0;
    int negative=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            positive++;

        }
        else if(arr[i]<0){
            negative++;
        }
    }
    cout<<"number of positive nubers are "<<positive<<endl;
    cout<<"number of negative nubers are "<<negative;

}
