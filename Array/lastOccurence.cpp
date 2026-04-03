#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1,2,3,2,5,6,2};
    int x = 2;
    int index=-1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            index = i;
            break;
        }
    }
    cout<<"index no is "<<index;
}