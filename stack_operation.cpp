#include <bits/stdc++.h>
using namespace std;

 int sze=5;
 int top=-1;
 int arr_stack[5];
void push(int n){
    if(top==sze-1){
        cout<<"arr_stack is full"<<endl;
    }
    else{
        top+=1;
        arr_stack[top]=n;
    }

}
int main(){
   
    // for(int i=0;i<size;i++){
    //     cout<<"enter"<<i<<"th element"<<endl;
    //     cin>>value;
    //     arr_stack[i]=value;

    // }


}