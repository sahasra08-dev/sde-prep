#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4};
    int temp;
    for(int i=0;i<vec.size()/2;i++){
        temp=vec[i];
        vec[i]=vec[vec.size()-1-i];
        vec[vec.size()-1-i]=temp;




    }
    for(int val:vec){
        cout<<val<<" ";
    }

}
