#include <bits/stdc++.h>
using namespace std;
#define itrm(z,tc) for(int i=z;i<tc;i++)
// void reverseStr(string& s)
// {
//     int n = s.length();
 
//     // Swap character starting from two
//     // corners
//     for (int i = 0; i < n / 2; i++)
//         swap(s[i], s[n - i - 1]);
// }


int main(){
    int tc;
    cin>>tc;
    itrm(0,tc){
        long long n;
        string s;
        vector <string> str;
        cin>>n;
        cin>>s;
        str.push_back(s);
        string s2=s;
        char c1=s[0];
        char c2=s[n-1];
        int a=int(c1);
        int b=int(c2);

        if(a<=b){cout<<s<<endl;}
        else{
         // reverse(str.begin(),str.end());
           cout<<str[0]<<s2<<endl;

        }
    
       }
    }
