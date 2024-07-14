#include <iostream>
using namespace std;

int main(){
string str1,str2,strfinal;
int ndfl1,ndfl2;


 
 cout<<"Enter the first string:-"<<endl;
 cin>>str1;
 cout<<"Enter the second string:-"<<endl;
 cin>>str2;
 cout<<"Plese enter the number of character that needs to be deleted from end of first string:-"<<endl;
 cin>>ndfl1;
 cout<<"Plese enter the number of character that needs to be deleted from start of second string:-"<<endl;
 cin>>ndfl2;

 int strl1=str1.length();
 int strl2=str2.length();

 string strn1=str1.erase(strl1-ndfl1,ndfl1);
 string strn2=str2.erase(0,ndfl2);

if(strn1[(strn1.length()-1)]!=strn2[0]){
    strfinal=strn1+strn2;
}
else {
    strn2=str2.erase(0,1); 
    strfinal=strn1+strn2;}
 

 cout<<strfinal<<endl;
 cout<<" "<<endl;
 


 }



