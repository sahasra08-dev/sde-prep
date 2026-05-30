#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string original=str;
    reverse(str.begin(),str.end());
    string reverse=str;
    if(original==reverse){
        cout<<"palindrome";
    }
    else{
        cout<<"not pallindrome";
    }
    return 0;


}
