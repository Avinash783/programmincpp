#include<iostream>
using namespace std;

class rectangle{
int len;
int brd;

public:
rectangle();
rectangle(int,int);
void accept();
void calcarea();
void show();
int getlen();
void setlen(int);
};
int rectangle::getlen()
{
return len;
}

void rectangle::setlen(int l)
{
len=1;
}

rectangle::rectangle(){
len=1;
brd=1;
}
rectangle::rectangle(int l, int b){
len=1;
brd=b;
}
void rectangle::accept()
{
cout<<"enter len and brd:"<<endl;
cin>>len>>brd;
}
void rectangle::calcarea()
{
cout<<"area="<<len*brd<<endl;
}
void rectangle::show()
{
cout<<"lenght="<<len<<",breadth="<<brd<<endl;
}
int main()
{
rectangle r1,r2(21,20), r3,r4;

r2.show();
r4.setlen(100);
r2.show();
return 0;
}














