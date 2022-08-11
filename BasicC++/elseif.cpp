#include<iostream>
using namespace std;
int main(){
int choice;
 cout<< "Enter 1 for coffee"  <<"Enter 2 for tea : ";
 cin>>choice;
 if(choice==1)
 {
  cout<< "Your coffee is coming";

 }

 else if (choice==2)
 {
  cout<<"Your tea is coming";

 }
 else
 {
  cout<<"You are presses wrong option";
 }
 return 0;
 }