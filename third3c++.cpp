#include<iostream>
using namespace std;
/* a function call can stand onto the LHS of the assignment operator if a function is returning a value by reference.*/

 char& fn(char *s)
{
return s[0];
}
int main ()
{
char s[]="tcs";
char ch="t";
fn(s)=ch;
cout<<s<<endl;
return 0;
}
