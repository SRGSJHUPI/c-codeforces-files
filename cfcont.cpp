#include <iostream>
#include <string>
//#include <bits/stdc++.h>
using namespace std;

int main(){
    int no;
    
    cin>>no;
    for(int i=0;i<no;i++){
        int n,m,count=0,count2=0;
        string x,s;
        cin>>n>>m;
        cin>>x>>s;
        int k=n;
        if(n*m<=25){
        while(n<=2*m){
            size_t found = x.find(s);
        if(found != std::string::npos){
            cout<<"wow found"<<endl;
            count2=1;
            break;
        }
        else{
            x += x;
          //  cout<<"cout"<<count<<x<<endl;
            n*=2;
            cout<<"in else"<<count<<endl;
            count+=1;
        }}
        cout<<count<<endl;
        if(k>2*m){
            cout<<"in sencond if"<<count<<endl;
            x += x;
            size_t found = x.find(s);
        if(found != std::string::npos){
            count2=1;
            count+=1;

        }}



        if(count2){cout<<count<<endl;}
        else {cout<<"-1"<<endl;}
        }
        
    }
    return 0;
}