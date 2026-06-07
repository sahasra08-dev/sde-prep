#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec1={1,2,3};
    vector<int>vec2={4,5,6};
    vector<int>vec;
    for(int val:vec1){
        vec.push_back(val);
    }
    for(int val:vec2){
        vec.push_back(val);
    }
    for(int val:vec){
        cout<<val<<" ";
    }
}
