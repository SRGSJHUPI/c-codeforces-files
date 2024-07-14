// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int tc;
//     cin>>tc;
  
//     for(int i =0;i<tc;i++){
//         int n,a,sum,count=0;
//         cin>>n;
//         int m=n;

//         for(int j=0;j<2;j++){
//             if(n==1){count=count+1; break;}
//             else if(n==2){count=count+2;break;}
//             else if(n==3){count=count+1;break;}
//             else if(n==4){count=count+2;break;}
//             else if(n==5){count=count+3;break;}
//             else if(n==6){count=count+1;break;}
//             else if(n==7){count=count+2;break;}
//             else if(n==8){count=count+3;break;}
//             else if(n==9){count=count+2;break;}
//             else if(n==10){count=count+1;break;}
//             else if(n==11){count=count+2;break;}
//             else if(n==12){count=count+3;break;}
//             else if(n==13){count=count+2;break;}
//             else if(n==14){count=count+3;break;}
//             else if(n==15){count=count+1;break;}
//             else {
//                 n=n%15;
//                 cout<<"ye n ki bad ki val"<<n<<endl;
//                 count=count+(m-n)/15 ;
//                 cout<<"m-n=" <<m-n<<endl;
//                 cout<<"forst cout"<<count<<endl;
//             }
            
//         }

//         cout<<count<<endl;
       
//     }

// }

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minCoins(int n) {
    // Triangular numbers
    vector<int> coins = {1, 3, 6, 10, 15};
    vector<int> dp(n + 1, 10000000);
    dp[0] = 0;

    for (int i = 1; i <= n; ++i) {
        for (int coin : coins) {
            if (i - coin >= 0) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    return dp[n];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        if (n < 1000) {
            cout << minCoins(n) << endl;
            continue;
        }
        int temp = n/15;
        temp -= 15;

        cout << minCoins(n-temp*15) + temp << endl;
    }

    return 0;
}