#include<iostream>
using namespace std;
int main(){
    int a = 100 , b = 150;
    cout <<"Before swapping a ="<< a<<",b ="<<b<<endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"After Swapiing a="<<a<<",b="<<b<<endl;
    return 0;
}