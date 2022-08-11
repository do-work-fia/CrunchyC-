#include<iostream>
using namespace std;
int main(){

  int a;
  
  cout<<"enter any value  :  ";
  cin>>a;

  if(a>0)
  cout<<" This is positive";
  else{
    if (a<0)
    cout<<"This is negative";
  
    else{
    cout <<" this is zero";
    }
  }
    return 0;
  
}