#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        int n;
        //vector <int> vec;
        string a,b,c;
        cin>>n;
        cin>>a>>b>>c;
        string ans;
        for(int j=0;j<n;j++){
           
            if(c[j]==a[j] or c[j]==b[j]){
                if(a[j]==b[j]){
                    ans="YES";
                   
                }
                else{
                    ans="NO";
                  

                } 
                
            }
            else {
                ans="YES";
               
            }
        }

        cout<<i<<endl;
        cout<<ans<<endl;
       }
}