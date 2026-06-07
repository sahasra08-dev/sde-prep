#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,2,4,5};
    int n;
    cin>>n;
    int freq=0;
    for(int val:vec){
        if(val==n){
            freq++;
        }
    }
    cout<<"frequency of number n in a vector is "<<freq;


}
