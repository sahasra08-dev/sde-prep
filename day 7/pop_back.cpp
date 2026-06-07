#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4};
    vec.pop_back();
    vec.pop_back();
    for(int val:vec){
        cout<<val<<" ";
    }
}
