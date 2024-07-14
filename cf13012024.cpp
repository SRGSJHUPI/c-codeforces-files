#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    
    for(int i =0;i<tc;i++){
        int n,count=0;
        cin>>n;
        vector<int> vec;
        for(int j=0;j<n;j++){
            int k;
            cin>>k;
            vec.push_back(k);
        }

        int sum=accumulate(vec.begin(), vec.end(), 0);
        int div=sum/n;
        // cout<<"ye div hai"<<div<<endl;
        for(int k=0;k<n-1;k++){
            int rem=0;
            if(vec[k]>=div){
                // cout<<k<<"true hai"<<endl;
                rem=vec[k]-div;
                vec[k+1]+=rem;
                
            }
            else count=1;

        }
        // cout<<"count hai"<<count<<endl;

    if(count==0){
        cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
        
    }
}