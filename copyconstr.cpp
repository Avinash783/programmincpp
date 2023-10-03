#include<iostream>
#include<cstring>
using namespace std;
class laptop
{
int lid;
char *make;
double cost;

public:
laptop();
laptop(int, char*,double);
void show();
~laptop();
laptop(laptop &);
};
laptop::~laptop()
{
delete []make;
}
laptop::laptop(laptop &l)
{
lid=l.lid;
make=new char[strlen(l.make)+1];
strcpy(make,l.make);
cost=l.cost;
}

laptop::laptop()
{
lid=101;
make=new char[3];
strcpy(make,"hp");
cost=40000;
}
laptop::laptop(int id, char*m,double c)
{
lid=id;
make=new char[strlen(m)+1];
strcpy(make,m);
cost=c;
}
void laptop::show()
{
cout<<lid<<endl;
cout<<make<<endl;
cout<<cost<<endl;
}
int main()
{
laptop l1;
laptop l2(102,"lenovo",35000);

laptop l4(l2);
l2.show();
cout<<endl;
l4.show();
return 0;
}

/*
OUTPUT:
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
102
lenovo
35000

102
lenovo
35000
*/

















