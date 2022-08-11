/* Write a program that reads two students information about math exam
Inputs are : Name, id, grade. */





#include<iostream>
using namespace std;
int main(){

string name1;
cout<<"Enter the student  number name 1: ";
cin>>name1;

string id1;
cout<<"His ID  Number: " ;
cin>>id1;

double grade1;
cout<<"His grade: " ;
cin>>grade1;

string name2;
cout<<"Enter the student number name 2: " ;
cin>>name2;

string id2;
cout<<"His ID Number: ";
cin>>id2;

double grade2;
cout<<"His grade: ";
cin>>grade2;


cout<<"\nStudents grades in math\n";

	cout<<name1<<" (with id "<<id1<<") got grade: "<<grade1<<"\n";
	cout<<name2<<" (with id "<<id2<<") got grade: "<<grade2<<"\n";
	cout<<"Average grade is "<<(grade1 + grade2) / 2.0<<"\n";
 return  0;

}