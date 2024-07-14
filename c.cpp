// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int a,tc,coutn=0;
//     cin>>tc;
//     vector<string> vec;
//     for(int i =0;i<tc;i++){
//         string inp;
//         cin>>inp;
//         vec.push_back(inp);

//     }
//     for (int i = 0; i < tc; i++){
//     for(int j=0;j<8;j++){

//         if(vec[i][j]=='7'){
            
//             coutn=2;
//             break;
//         }
//         else if(vec[i][j]=='1'){
            
//             coutn=1;
//             break;
//         }
//     }
//     if(coutn==2){cout<<"71"<<endl;}
//     if(coutn==1){cout<<"17"<<endl;}
//     }
// return 0;
// }



// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
        
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         vector<pair<int, int>> operations;
//         int k = 0;

//         while (k < 8) {
//             int xor_result = 0;
//             int l = -1, r = -1;

//             // Find a non-zero subarray
//             for (int i = 0; i < n; i++) {
//                 xor_result ^= a[i];
//                 if (xor_result != 0) {
//                     l = 1;
//                     r = i + 1;
//                     break;
//                 }
//             }

//             if (l == -1) {
//                 // All elements are already 0
//                 break;
//             }

//             // Perform the operation
//             for (int i = l; i <= r; i++) {
//                 a[i - 1] = xor_result;
//             }

//             operations.push_back({l, r});
//             k++;
//         }

//         // Output the result
//         cout << k << endl;
//         for (int i = 0; i < k; i++) {
//             cout << operations[i].first << " " << operations[i].second << endl;
//         }
//     }

//     return 0;
// }



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Sort the array a in ascending order
        sort(a.begin(), a.end());
         // Initialize a permutation b as 1, 2, 3, ..., n
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            b[i] = i + 1;
        }
        
        // Output the permutation b
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}