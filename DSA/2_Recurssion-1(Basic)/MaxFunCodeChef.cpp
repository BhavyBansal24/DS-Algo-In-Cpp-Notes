#include<iostream>
using namespace std;
int N;
int sorting(int a[]) { //bubble sort
    for(int i =0;i<N;i++){
        for(int j=0 ; j < (5-i-1) ; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    return 0;
}

int main(){
    int T;
    cin >> T;
    for(int i =0;i<T;i++){
        cin >> N;
        int arr[N] = {0};
        for(int j =0;j<N;j++){
            cin >> arr[j];
            }
            sorting(arr);
            int a = arr[0];
            int b = arr[N-1];
            cout << (b-a)*2 << endl;
    }
}