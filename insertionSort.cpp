#include <bits/stdc++.h>
using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int arr[5]  {5, 3, 4, 1, 2}, j;
    int size = sizeof(arr) / sizeof(arr[0]);

    
    for(int i = 1 ; i < size ; i++){
        j = i - 1;

        while(j >= 0 && arr[j] > arr[j + 1]){
            swap(arr[j], arr[j + 1]);
            j--;
        }

        for(int k : arr){
            cout << k << " ";
        }
        cout << endl;
    }

    

    return 0;
}