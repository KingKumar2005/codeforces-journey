#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    long long k;
    cin >> n >> k;

    int arr_ht[n];
    for(int i = 0 ; i < n ; i++){
        int temp;
        cin >> temp;
        arr_ht[i] = temp;
    }
    
    int arr_steepness[n];
    for(int i = 0 ; i < n ; i++){
        if(i != n-1){
            int max_num = arr_ht[i] > arr_ht[i+1] ? arr_ht[i] : arr_ht[i+1];
            int min_num = arr_ht[i] < arr_ht[i+1] ? arr_ht[i] : arr_ht[i+1];
            arr_steepness[i] = max_num - min_num;
        }else{
            int max_num = arr_ht[0] > arr_ht[n-1] ? arr_ht[0] : arr_ht[n-1];
            int min_num = arr_ht[0] < arr_ht[n-1] ? arr_ht[0] : arr_ht[n-1];
            arr_steepness[i] = max_num - min_num;
        }
    }
    int min_steepness = arr_steepness[0];
    for(int i = 0 ; i < n ; i++){
        if(min_steepness > arr_steepness[i]){
            min_steepness = arr_steepness[i];
        }
    }
    sort(arr_steepness, arr_steepness + n);
    for(int i = 0 ; i < n-1 ; i++){
        while(arr_steepness[i] <= arr_steepness[i+1] && k != 0){
            arr_steepness[i] = arr_steepness[i] + 1;
            k -= 1;
        }
    }
    cout << arr_steepness[0];
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solution();
        cout << endl;
    }
    // solution();

    return 0;
}