#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,tc,la;

    cin>>tc;
    cin>>la;
    int arr[la];
    vector<int> vc;
    vector<int> vb;
    for(int i=0;i<la;i++){
        cin>>a;
        arr[i]=a;
    }

    int count=0;
    for(int i=0;i<la;i++){
        int count=0;
        vb.push_back(arr[i]);
      
       for(int j=1;j<vb.size();j++){
        if(vb[j-1]%arr[i+1] ==0){count=1;};
       }
       if(count){
    
        vb.push_back(arr[i]);
       }
       else{
       vc.push_back(arr[i]);
    }
    }
    cout<<vb.size()<<" "<<vc.size()<<endl;
    for(int i=0;i<vb.size();i++){
        cout<<vb[i]<<endl;
    }
     for(int i=0;vc.size();i++){
        cout<<vc[i]<<endl;
    }
}