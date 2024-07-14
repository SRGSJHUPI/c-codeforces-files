#include <bits/stdc++.h>
using namespace std;
#define itrp(i,s,e) for(int i=s;i<e;i++) 
#define sort1(v) sort(v.begin(),v.end())


bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
#define sort2(vect) sort(vect.begin(), vect.end(), sortbysec);


int main(){
    // cout<<"main function started"<<endl;
    int tc;
    cin>>tc;
    itrp(i,0,tc){
        // cout<<"passed00"<<endl;
        // int c1,c2,c3,c4;
        vector<pair<int,int>> p{{},{},{},{}};

        cin>>p[0].first>>p[0].second;
        cin>>p[1].first>>p[1].second;
        cin>>p[2].first>>p[2].second;
        cin>>p[3].first>>p[3].second;
        // cout<<"passed1"<<endl;

        sort1(p);
        vector<pair<int,int>> p1={p[0],p[1]};
        vector<pair<int,int>> p2={p[2],p[3]};
        sort2(p1);
        sort2(p2);
        // cout<<"passed2"<<endl;

       int d1=sqrt((p1[0].first-p1[1].first)*(p1[0].first-p1[1].first) + (p1[0].second-p1[1].second)*(p1[0].second-p1[1].second));
       int d2=sqrt((p1[0].first-p2[0].first)*(p1[0].first-p2[0].first) + (p1[0].second-p2[0].second)*(p1[0].second-p2[0].second));

       int result=d1*d2;
       cout<<result<<endl;

    }
    
}