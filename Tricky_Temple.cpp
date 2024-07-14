#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        int n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        string ans;
        for(int j=0;j<n;j++){
        if (a[i]==b[i] && a[i]!=c[i]) ans="YES" ;
        if (b[i]!=c[i] && a[i]!=b[i] && c[i] != a[i]) ans= "YES";
        else {
                ans="NO"; 
            }
                
            }
             cout<<ans<<endl;  
        }
       }
