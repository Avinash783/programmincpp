#include<iostream>
using namespace std;
//cout is object of a class ostream and cin is an object of a class istream.

int main()
{
int a, b;
float f;
cout<<"hello cpp.."<<endl;
cout<<"enter two number:"<<endl;
cin>>a>>b;
int c=a+b;
cout<<"sum="<<c<<endl;
cout<<"enter float:"<<endl;
cin>>f;
cout<<f<<endl;
return 0;
}

/*
OUTPUT:
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ g++ firstc++.cpp
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
hello cpp..
enter two number:
24
34
sum=58
enter float:
80.5
80.5
*/
