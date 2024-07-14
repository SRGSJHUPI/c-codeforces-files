#include <bits/stdc++.h>
using namespace std;
#define itrm(z,tc) for(int i=z;i<tc;i++)


int main(){
    int tc;
    cin>>tc;
    itrm(0,tc){
        vector <int> vec1;
        int n,val;
        cin>>n;
        int flag=0,gi=0;
        itrm(0,n){
            cin>>val;
            vec1.push_back(val);

        }
        vector <int> vec2;
        vec2=vec1;

        itrm(0,n-2){
          //  cout<<"enterff"<<i<<vec1[1]<<2*vec1[0]<<vec1[2]<<endl;
            if(vec1[i]==0){ flag=1;gi+=1;continue;}

            else if(vec1[i]<0){
                flag=0;
                break;
            }

            else if(vec2[1]<2*vec2[0]) {
               // cout<<"enterj"<<vec2[1]<<2*vec2[0]<<vec2[2]<<endl;
                flag=0;break;}

            else if(vec2[n-2]<2*vec2[n-1]) {
                // cout<<"enterp"<<vec2[n-2]<<2*vec2[n-1]<<endl;
                 flag=0;break;}

            else{
                vec1[i+1]-=2*vec1[i];
                vec1[i+2]-=vec1[i];
                flag=1;
                gi=gi+1;
            }

        }
       if(gi==n-2){ 
        if(vec1[n-2]==0 and vec1[n-1]==0){
            flag=1;
        }
        else flag=0;
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       
    
       
    }
}