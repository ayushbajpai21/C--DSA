// take positive integer input and tell output even or odd 

#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the number:- ";
    cin>>n;
    if(n %2 ==0){
        cout<<"the number "<< n << " is a even number"<<endl;
    }
    else{
        cout<<"the number "<< n << "is a odd number "<<endl;
    }
} 