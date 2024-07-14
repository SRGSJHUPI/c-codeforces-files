#include <bits/stdc++.h>
using namespace std;

int main(){
    int inp,count=0;
    
    vector<string> v;
    cin>>inp;
    for(int i=0;i<inp;i++){
        
      string temp;
      cin>>temp;
        v.push_back(temp);
       }

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    

        for(int j=0;j<inp;j++){
           for(int k=0;k<sizeof(bracket)-1;k++){
            if(v[j][k]=="(" and v[j][k+1]=="(" ){
                count=1;

            }
            else if(v[j][k]==")" && v[j][k+1]=="(" ){
                count=2;
                }
            else if(v[j][k]=="(" and v[j][k+1]==")" ){
                count=3;
                
            }
            else count=4; 
    }
        if(count==1){
            for(int m=0;m<sizeof(bracket);m++){
                    cout<<"()"<<endl;
                }

        }
        if(count==2){
            for(int m=0;m<sizeof(bracket);m++){
                    cout<<"("<<endl;}
                for(int m=0;m<sizeof(bracket);m++){
                    cout<<")"<<endl;    
                  }

        }
        if(count==3){
            cout<<"No"<<endl;

        }
        if(count==4){
            cout<<"YES"<<endl;

        }



        }
     return 0;
     }
