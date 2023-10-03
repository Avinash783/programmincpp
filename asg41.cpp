#include<iostream>
using namespace std;

class array
{
int size;
int*arr;

public:

array();
array(int);
void accept();
void display();
~array();
array(array &);
};
array::array(array &a)
{
size=a.size;
arr=new int[size];
for(int i=0; i<size;i++)
arr[i]=a.arr[i];
}
array::array()
{
size=5;
arr=new int[size];
for(int i=0; i<size;i++)
arr[i]=0;
}
array::array(int s)
{
size=s;
arr=new int[size];
for(int i=0; i<size; i++)
arr[i]=0;
}
void array::accept()
{
cout<<"enter elements:"<<endl;
for(int i=0;i<size; i++)
cin>>arr[i];
}
void array::display()
{
for(int i=0; i<size; i++)
cout<<arr[i]<<" ";
cout<<endl;
}

array::~array()
{
delete[]arr;
}
int main()
{
array a1;
array a2(6);
a1.accept();
a1.display();
a2.accept();
a2.display();

array a3(a2);
a3.display();
return 0;
}






