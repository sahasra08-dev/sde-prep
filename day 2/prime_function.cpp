#include<iostream>
using namespace std;
bool isprime(int a){
    if(a<=1){
        return false;
    }
    else{
        for(int i=2;i<=a/2;i++){
            if(a%i==0){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int b;
    cin>>b;
    if(isprime(b)){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    return 0;
}
