#include <bits/stdc++.h>
using namespace std;
#define itrm(z,tc) for(int i=z;i<tc;i++)


int main(){
    int tc;
    cin>>tc;
    itrm(0,tc){
       vector <int> vecn;
       vector <int> vecm;

        int n,m,k;
        int a,b,dono,pahla,dusra;
        cin>>n>>m>>k; 
        itrm(0,n){
            cin>>a;
            vecn.push_back(a);
        }
        itrm(0,m){
            cin>>b;
            vecm.push_back(b);
        }
        vector <int> vecnn;
        vector <int> vecmm;
        itrm(0,n){
            if(vecn[i]<=k and vecn[i]>0){
                vecnn.push_back(vecn[i]);
            }
        }
        itrm(0,m){
            if(vecm[i]<=k and vecm[i]>0){
                vecmm.push_back(vecm[i]);
            }
        }
        
        sort(vecnn.begin(), vecnn.end()); 
        sort(vecmm.begin(), vecmm.end()); 
int same;
       itrm(0,n){
        for(int j=0;j<m;j++){
            if(vecnn[i]==vecmm[j]){
                same+=1;
            }
       }
      int dif1=0,dif2=0;

       itrm(0,n){
        for(int j=0;j<m;j++){
            if(vecnn[i]!=vecmm[j]){
                dif1+=1;
            }
        }
       }
       itrm(0,m){
        for(int j=0;j<n;j++){
            if(vecmm[i]!=vecnn[j]){
                dif2+=1;
            }
        }
       }
        if(dif1+same<=k and dif2+same<=k and dif1+dif2+same==k){
        cout<<"yes"<<endl;
       }
       else cout<<"no"<<endl;
       }
    }
}
      

















       // reverseStr(str);

        // cout<<"ye reverse hai"<<str<<endl;
        //  itrm(0,a){
        //     if(str[i]=='W'){
        //         //cout<<"entered in age"<<endl;

        //         cout1+=1;
        //     }
        //     else{
        //         break;
        //     }

        // }
    //     int final=a-(cout2+cout1);
    //    // cout<<"piche"<<cout1<<"age se"<<cout2<<endl;

    //     cout<<final<<endl;
    //     // cout<<endl;
