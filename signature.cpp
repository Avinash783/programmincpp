#include<iostream>
using namespace std;
int addd(int a, int b){
return a+b;
}
int add(int a, int b, int c){
return a+b+c;
}
float add(int a, float b){
return a+b;
}
float add(float a, int b){
return a+b;
}
int main() {
cout<<add(10,20)<<endl;
cout<<add(10,20,30)<<endl;
cout<<add(20,20.5f)<<endl;
cout<<add (20.5f,20)<<endl;
return 0;
}

