#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    string str;
    cin >> tc;
    while(tc--){
        cin>>str;
        if(str[0]=='a' or str[1]=='b' or str[2]=='c'){
            cout<<"YES"<<endl;
        }
        else {cout<< "NO"<<endl;}
    }
    return 0;
}