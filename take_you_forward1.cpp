#include <iostream>
using namespace std;


int main(){
int arr[] = {-1,0,3,20,2,5};
//cout<<typeid(arr).name()<<endl;


for(int i=0;i<5;i++){
    if(arr[i]>arr[i+1]){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;

    }
    

}
cout<<arr[5]<<endl;

}