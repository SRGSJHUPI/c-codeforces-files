#include <bits/stdc++.h>
using namespace std;

int main(){
    int no,n,m;
    string str;
    cin>>no;
    
    int count=0;
    vector<vector<string>> vec;
    
    for(int i=0;i<no;i++){
        vec.push_back(vector <string> ());
        cin>>n>>m;
        for(int j=0;j<n;j++){
            cin>>str;
            vec[i].push_back(str);
            
        }
        }

// for(int i=0;i<no;i++){
//     for(int j=0;j<vec[i].size();j++){
//         cout<<vec[i][j] << " ";
//     }
//     cout<<"\n";
// }

        for(int x=0;x<no;x++){
        for(int p=0;p<vec[x].size();p++){
            for(int r=0;r<m;r++){
                if(vec[x][p][r]=='v'){count=1;
                  for(int r=0;r<vec[x][r].size();r++){
                    if(vec[x][p][r+1]=='i'){count+=1;  
                        for(int r=0;r<m;r++){
                          if(vec[x][p][r+2]=='k'){count+=1;   
            
                             for(int r=0;r<m;r++){
                                 if(vec[x][p][r+3]=='a'){count+=1;}  }
            }}}}
            }}

    }
     if(count==4){
        cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
    }
   

}
