#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int tc;
    cin>>tc;
    
    while(tc--){
        vector<int> vc;
        int a,min,index=0,mind=0,product=1,count=0,n,m,p,q;
        cin>>n;
        m=n;
        q=p=n;

        while(n--){
            cin>>a;
            vc.push_back(a);
            min=vc[0];
        }
        
        while(m--){
            if(min<=vc[m]){   
                continue;
            }
            else {min=vc[m];
            index=m;
            }
        }
         
        while(p--){
            
            if(vc[p]==min){
                count=count+1;
                
            }
            else {   
                continue;
                }
        }
        mind=min+1;

        while(q--){
            if(vc[q]==min){
                continue;  
            }
            else{       
            product=product*vc[q];  
            }
        }
        if(count==1){
            product=product*mind;
        }
        else {
            int count1=count-1;
            int prod=1;
            while(count1--){
                prod=prod*min;
            }
            product=product*mind*prod;
        }
        cout<<product<<endl;
    }
}