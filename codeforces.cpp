#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define test(t)     int t; cin >> t; while(t--)
#define f(i, a, b)  for(int (i) = (a); (i) < (b); ++(i))
#define endl        "\n"
#define deb(x)      cout << #x << ": " << x << endl;
#define fast        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int arr1[n];

    int count = 0;
    for (int i = 0; i<n;i++) arr[i] = i+1;
    for (int i = 0; i<n;i++) cin >> arr1[i];

    for (int i = 0; i<n;i++) {
        if (arr1[i] == arr[i]) count++;
    }

    int output = (count % 2 == 0) ? count / 2 : count / 2 + 1;
    cout << output << endl;
}

int main()
{
    fast;
    test(t)
        solve();
    return 0;
}


//   my method
// #include <iostream>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
// int no,student,pos,count,output;
// cin>>no;
// int i;

// for(i=0;i<no;i++){
//     count=0;
//   cin>>student;
//   int arr[student];
//     int arr1[student];
// for(int i=0;i<student;i++){
//     arr1[i]=i+1;

// }
//   for(int p=0;p<student;p++){
//     cin>>pos;
//     arr[p]=pos;

//   }
//   for(int s=0;s<student;s++){
//      if(arr[s]==arr1[s]){
//         count+=1;
//      }
//   }
//     if(count%2==0){
//       output=count/2;

//           }
//    else output=(count+1)/2;
//    cout<<output<<"\n";


// }

// return 0;
// }