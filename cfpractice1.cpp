#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
   
    cin >> tc ;
    for(int i=0;i<tc;i++){
        int count=0,n,k;
         string str;
        cin>>n >>k;
        cin>>str;
        
    for(int j=0;j<n;j++){
    
        if(str[j]=='W') {
            
        continue;
        }
        else {
        
            count+=1;
            j=j+k-1;

        }
    } 
   // cout<<" "<<endl;   
    cout<<count<<endl;
       }
    }










