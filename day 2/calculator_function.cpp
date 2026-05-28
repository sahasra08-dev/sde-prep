#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mult(int a,int b){
    return a*b;
}
int divide(int a,int b){
    return a/b;
}
int main(){
    int c,d;
    cin>>c>>d;
    cout<<"1.add"<<" "<<"2.sub"<<" "<<"3.mult"<<" "<<"4.divide";
    int choice;
    cout<<"choice";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<add(c,d);
        break;
        case 2:
        cout<<sub(c,d);
        break;
        case 3:
        cout<<mult(c,d);
        break;
        case 4:
        cout<<divide(c,d);
        break;
        default:
        cout<<"invalid choice";



    }
    return 0;
}
