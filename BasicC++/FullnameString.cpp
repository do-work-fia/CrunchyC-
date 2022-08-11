// if your name is having  more than one word then it cannot be read all words. cause cin count first word not the rest.
//Therefore, we use getline . it will print and read rest of the words.


#include<iostream>
using namespace std;
int main(){

string str;
cout << "May i know your name?: ";
 getline(cin,str);
 cout << "Welcome Mr. or Miss "  <<str;
 return 0;
}