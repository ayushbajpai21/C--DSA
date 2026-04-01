#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array :";
    cin>>n;
    int arr[n];
    int target=10;
    bool found = false;
    for(int i=0 ; i<=n-1; i++){
        cin>>arr[i];
    }
    for(int i=0 ; i<=n-1 ; i++){
      if(arr[i]==target){
         found = true;
         break;
      }
    }
    if(found){
        cout<<"target is match";
    }
    else{
        cout<<"target is not match";
    }
}