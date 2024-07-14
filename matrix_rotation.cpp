#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    //cout<<"enter test cases"<<endl;
    cin>>tc;
    for(int i=0;i<tc;i++){
        int n11,n12,n21,n22;
        cin>>n11>>n12;
        cin>>n21>>n22;
        vector <int> vec = {n11,n12,n22,n21};
        int max=distance(vec.begin(),max_element(vec.begin(), vec.end()));
        int min=distance(vec.begin(),min_element(vec.begin(), vec.end()));
        //cout<<"min="<<min<<"max="<<max<<endl;

        if(abs(min-max)==2){
            cout<<"Yes"<<endl;
        }
        
        else {
            //cout<<abs(min-max)<<endl;
            cout<<"No"<<endl;
        
    }
}}