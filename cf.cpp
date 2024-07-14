#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define asort(v) sort(v.begin(), v.end())
#define dsort(v) sort(v.rbegin(), v.rend())
#define MAX(v) *max_element(v.begin(), v.end())
#define MIN(v) *min_element(v.begin(), v.end())
#define SUM(v) accumulate(v.begin(), v.end(), 0LL)
#define pb push_back
#define MOD 1000000007
#define itrp(i, a, b) for (int i = a; i < b; i++)
#define itrm(i, a, b) for (int i = a; i >= b; i--)
 
void Display(vector<int> &v)
{
    for (auto &A : v)
        cout << A << " ";
    cout << endl;
}
 
 
 
signed main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
       
   int n;
   cin>>n;
   vector<pair<int,int>>v;
   for(int i=0;i<n;i++){
       int a,x;
       cin>>a >> x;
       pair<int,int>p=make_pair(a,x);
       v.pb(p);
   }
   int st1=0,st2=LLONG_MAX;
   for(int i=0;i<n;i++){
       if(v[i].first==1){
           st1=max(st1,v[i].second);
       }
       else if(v[i].first==2){
           st2=min(st2,v[i].second);
       }
   }
  // cout<<st2-st1<<endl;
   if(st1>st2){
       cout<<"0"<<endl;
   }
   else{
       int ct=0;
       for(int i=0;i<n;i++){
           if(v[i].first==3){
              if(v[i].second<=st2&&v[i].second>=st1){
                  ct++;
              }
           }
       }
       
       
           cout<<(st2-st1+1-ct)<<endl;
      
       
   }
    
        
    }
    
    return 0;
}