#include<iostream>
using namespace std;
void pallindromecheck(int a){
    int reverse=0;
    int original=a;
    while(a!=0){
        reverse=reverse*10+(a%10);
        a=a/10;
    }if(reverse==original){
        cout<<"pallindrome";
    }
    else{
        cout<<"not pallindrome";
    }
}
int main(){
    int b;
    cin>>b;

    pallindromecheck(b);

    return 0;
}
