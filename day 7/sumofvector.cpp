#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4};
    int sum=0;
    for(int val:vec){
        sum+=val;
    }
    cout<<"sum of the vectors is "<<sum;

}
