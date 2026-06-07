#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,3,23,45,7,5,34};
    int max=vec[0];
    for(int val:vec){
        if(val>max){
            max=val;
        }
    }
    cout<<max;

}
