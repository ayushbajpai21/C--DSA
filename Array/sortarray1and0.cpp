#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int>& v){
    int left = 0;
    int right = v.size() - 1;

    while(left < right){
        // swap only when left = 1 and right = 0
        if(v[left] == 1 && v[right] == 0){
            swap(v[left], v[right]);
            left++;
            right--;
        }

        // move left if already correct
        if(v[left] == 0) left++;

        // move right if already correct
        if(v[right] == 1) right--;
    }
}

int main(){
    vector<int> v = {1, 0, 0, 0, 1, 1, 1};

    cout << "Original Array: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    sort01(v);

    cout << "Sorted Array: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}