#include<iostream>
using namespace std;
int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int b;
    cin>>b;
    cout<<"factorial="<<factorial(b);
    return 0;
}
