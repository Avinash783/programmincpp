#include<iostream>
using  namespace std;
void swap(int ,int &ra, int &rb)
{
int temp=ra;
ra=rb;
rb=temp;
}
int main()
{
int a,b;
cout<<"enter the value of a and b:"<<endl;
cin>>a>>b;
swap(a,b);
cout<<" "<<a<<" "<<b<<endl;
return 0;
}

/*
OUTPUT:
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ g++ swap.cpp
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
enter the value of a and b:
78
40
 40 78
*/


