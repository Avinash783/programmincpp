#include<iostream>
using namespace std;
class rectangle{
private:
int len;
int brd;
public:
void accept();
void calcrea();
};
void rectangle::accept() //:: scope resolution 
{
cout<<"enter len and brd:"<<endl;
cin>>len>>brd;
}
void rectangle::calcrea()
{
cout<<"area="<<len*brd<<endl;
}
int main()
{
rectangle r1;
r1.accept();
r1.calcrea();
return 0;
}

/*
OUTPUT:
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ g++ rectangle.cpp
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
enter len and brd:
6
7
area=42
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ 

*/
