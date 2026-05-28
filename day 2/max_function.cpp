#include<iostream>
using namespace std;
int max(int a,int b,int c){
    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }
    return 0;
}
int main(){
    int d,e,f;
    cin>>d>>e>>f;
    cout<<"maximum number"<<max(d,e,f);
}
