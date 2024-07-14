#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    //vector<int> vec;
    for(int i =0;i<tc;i++){
        int a;
        cin>>a;
        if(a<=28){
            char c;
            c=a-2+96;
            cout<<"aa"<<c<<endl;

        }
        else if(a>28 and a<=53){
            char c;
            c=a-27+96;
            cout<<"a"<<c<<"z"<<endl;

        }
        else{
            char c;
            c=a-52+96;
            cout<<c<<"zz"<<endl;

        }
    
        
    }

}