#include<iostream>
using namespace std;

bool is_Sorted(int a[],int size){
    if(size == 0 || size ==1){
        return true;
    }
    
    if(a[0]>a[1]){
        return false;
    }

    bool isSmallerSorted = is_Sorted(a+1,size-1);
    return isSmallerSorted;
}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,123};
    int arra[15] = {134,34324,3244,21,4131,4,12344,41234,241,24,12,234,4,23,44};

    cout << is_Sorted(arr,10) << endl;
    cout << is_Sorted(arra,15) << endl;
}