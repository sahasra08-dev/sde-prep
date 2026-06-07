#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,3,4,4,5,5,2,1};
    for(int i=0;i<vec.size();i++){
        for(int j=i+1;j<vec.size();j++){
            if(vec[i]==vec[j]){
                vec.erase(vec.begin()+j);
                j--;
            }
        }
    }
    for(int val:vec){
        cout<<val<<" ";
    }
}
