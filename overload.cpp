#include<iostream>
using namespace std;

int add( int a,int b)
{
int c;
c=a+b;
return c;
}
float add(float a,float b)
{
float c;
c=a+b;
return c;
}
double add(double a,double b)
{
double c;
c=a+b;
return c;
}
int main()
int a,b,c;
float z;
double n;

c=add(20,20);
cout<<""<<c<<endl;
z=add(4.22f,6.66f);
cout<<""<<z<<endl;
n=add(55.44f,7.44f);
cout<<""<<n<<endl;
return 0;
}

