#include <bits/stdc++.h>
using namespace std;

int main(){
    double T1,T2,D1,D2,I1,I2,aw,dw,m,intf_cond;
    cout<<"Inser value of D1+D2:-"<<endl;
    cin>>I1;
    cout<<"Inser value of gear ratio(D1/D2):-"<<endl;
    cin>>I2;
    D2=I1/(1+I2);
    D1=I1-D2;
    cout<<"D1="<<D1<<endl;
    cout<<"D2="<<D2<<endl;

    cout<<"Enter no. of assumed T1:-"<<endl;
    cin>>T1;
    T2=T1/I2;

    m=D2/T2;
    aw=m;

    intf_cond=(2*aw*(1/T2)*(1/m))/(sqrt(1+(1/T2)*(1/T2 +2)*0.117) -1);//pressure angle(phi) taken as20 degree

     if(T1>=intf_cond){
        cout<<"Wow satisfied T1>=condition, as T1="<<T1<<" "<<"and condition was"<<intf_cond<<endl;
     }
     else cout<<"oh no condition not satisfied T1 is not greate than condition which was"<<intf_cond<<endl;



}