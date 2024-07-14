#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    //vector<int> vec;
    for(int i =0;i<tc;i++){
        int n,a;
        cin>>n;
       // int find2=0;
         vector<int> vec1;
       // vector<int> vec2;

        
        for(int i =0;i<n;i++){
            cin>>a;
           
            vec1.push_back(a);
        }

         int sum1=accumulate(vec1.begin(), vec1.end(), 0);
         if(sum1==0 or sum1%3==0){
            cout<<"0"<<endl;
         }
         else if(sum1%3==1){
            for(int j=0;j<n;j++){
                if(vec1[j]==1){
                    cout<<"1"<<endl;
                    continue;
                }
                else{
                    cout<<"2"<<endl;

                }
            }
         }
         else if(sum1%3==2){
            cout<<"1"<<endl;
         }   
    }

}