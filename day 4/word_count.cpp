#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            count++;
        }
    }
    int word_count=str.length()-count;
    cout<<"word count is "<<word_count;
}
