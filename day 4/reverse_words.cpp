#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string word="";
    string result="";
    for(int i=str.length()-1;i>=0;i--){
        if(str[i]!=' '){
            word=str[i]+word;
        }
        else{
            result=result+word+" ";
            word="";
        }
    }
    result=result+word;
    cout<<"reversing words "<<result;


}
