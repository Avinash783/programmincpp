#include<iostream> 
using namespace std;

int main()
{
int n;
cout<<"enter the array:"<<endl;
cin>>n;

int *p=new int[n];
for(int i=0; i<n;i++)
{
cout<<"enter the marks:"<<endl;
cin>>p[i];
}
for(int i=0; i<n; i++)
{
cout<< " "<<p[i]<<" ";
}
delete []p;
return 0;
   }
/*
OUTPUT:
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ g++ asgmarks.cpp
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
enter the array:
5
enter the marks:
3
enter the marks:
4
enter the marks:
5
enter the marks:
7
enter the marks:
8
 3  4  5  7  8 hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ 

*/
