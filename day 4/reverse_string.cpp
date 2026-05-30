#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    reverse(str.begin(),str.end());
    cout<<"reversed string is "<<str;
    return 0;

}
