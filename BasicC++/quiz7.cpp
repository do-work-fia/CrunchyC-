#include<iostream>
using namespace std;
 
int main() {
	int salary = 500;
 
	if (salary < 1000)
		salary += 5000;
	if (salary >= 1000 && salary < 20000)
		salary += 6000;
	else
		salary -= 10000;
 
	cout<<salary;
 
	return 0;
}
 



