#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
     string s;
     cin>>s;
      string  s2;
      s2=s[1];
     int q=stoi(s2);
     for(int j=0;j<8;j++){
        if(q==j+1) continue;
        else{
            cout<<s[0]<<j+1<<endl;
        } 
     }
     for(int p=0;p<8;p++){
        char ch=97+p;
        if(ch==s[0])continue;
        else{
             cout<<ch<<s[1]<<endl;

        }
       
     }

    }
   

}