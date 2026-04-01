#include<iostream>
using namespace std;
int main (){
    int arr[]={1 ,51 ,6 ,7 ,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max =  arr[0];
    for(int i = 0 ; i<=size ; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"max number is an array " << max;
}