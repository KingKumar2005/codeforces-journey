#include <bits/stdc++.h>
using namespace std;

// int binary(int k) {
//     if (k == 0) return 0;

//     string res_s = "";
//     while (k > 0) {
//         int rem = k % 2;
//         k /= 2;
//         res_s = char('0' + rem) + res_s;
//     }
//     return stoi(res_s);
// }

// // The array is invariant, means the overall bits of the array never changes
// void solution(){
//     long n;;
//     cin >> n;
//     long long a[n];
//     for(int i=0 ; i<n ; i++){
//         int temp;
//         cin >> temp;
//         a[i] = temp;
//     }

//     long long temp_list[n];
//     for(int i = 0 ; i < n ; i++){
//         temp_list[i] = binary(a[i]);
//     }
//     int max_num = temp_list[0];
//     for(int i = 0 ; i < n ; i++){
//         if(temp_list[i] > max_num){
//             max_num = temp_list[i];
//         }
//     }
//     int count = 0;
//     string res = "";
//     while(max_num != 0){
//         max_num /= 10;
//         count += 1;
//         res += "0";
//     }
    
//     string temp_s_list[n];
//     for(int i = 0 ; i < n ; i++){
//         int temp = temp_list[i];
//         int count_t = 0;
//         while(temp != 0){
//             temp /= 10;
//             count_t += 1;
//         }
//         if(count_t != count){
//             string t = to_string(temp_list[i]);
//             while(count_t != count){
//                 t = "0" + t;
//                 count_t += 1;
//             }
//             temp_s_list[i] = t;
//         }else{
//             string t = to_string(temp_list[i]);
//             temp_s_list[i] = t;
//         }
//     }
    
//     // final result in binary
//     for(int i = 0; i < n ; i++){            // temp_s_list
//         for(int j = 0 ; j < count ; j++){   // temp_s_list[0] and res
//             if(temp_s_list[i][j] != res[j]){
//                 res[j] = '1';
//             }
//         }
//     }
    
//     // final result in int 
//     long final_res = 0;
//     for(int i = count - 1 ; i >= 0 ; i--){
//         int temp = res[i] - '0';
//         int expo = count - i - 1;
//         final_res += temp * (pow(2, expo));
//     }
//     cout << final_res;
// }

void solution() {
    int n;
    cin >> n;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        ans |= x;
    }
    cout << ans;
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