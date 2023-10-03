#include<iostream>
using namespace std;// swap function

void swap(int &ra, int &rb)
{
int temp;
temp=ra;
ra=rb;
rb=temp;
}
int main()
{
int a=10,b=20;
swap(a,b);
cout<<a<<"  "<<b<<endl;
return 0;
}

/*
OUTPUT:
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ g++ secondc++.cpp
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
20  10
*/

