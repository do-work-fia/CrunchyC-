#include<iostream>
using namespace std;
int main()
  {

double num1, num2;
 char operation;
 cout<<"enter two number with a sign to calculate: ";
 
cin>>num1>> operation>> num2;

if ( operation == '+') 
cout<< "num1 + num2"<<"\n";
else if(operation == '-')
cout<< "num1 - num2";
else if (operation == '*')
cout<< "num1 * num2";
else
		cout << num1 / num2 << "\n";

return 0;
  }
  
