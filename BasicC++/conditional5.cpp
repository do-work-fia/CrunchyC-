#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<" Enter  character or digit :  ";
  cin>>ch;


  if (ch>=65&&ch<=90)
  {
   cout<< "HEy , You , upper case!"; /* code */
  }
  
  else if (ch>=97&&ch<=122)
  {


   cout<<"Lower case";

  }
  else 
  {
    cout<< "this is numeric";
  }
  
  return 0;
}