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
laptop(int, char*, double);
void show();
~laptop();
};
laptop::~laptop()
{
delete []make;
}
laptop::laptop(){
lid=101;
make=new char[3];
strcpy(make,"hp");
cost=40000;
}
laptop::laptop(int id, char *m,double c)
{
lid=id;
make=new char[strlen(m)+1];
strcpy(make,m);
cost=c;
}
void laptop::show(){
cout<<lid<<endl;
cout<<make<<endl;
cout<<cost<<endl;
}
int main()
{
laptop l1;
laptop l2(102,"lenovo",35000);
l1.show();
cout<<endl;
l2.show();
return 0;
}

/*output:
pcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
101
hp
40000

102
lenovo
35000
*/
