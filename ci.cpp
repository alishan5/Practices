#include<iostream>
using namespace std;
int main(){
    double P=10000,R=5,T=2;
    double A,CI;
    A=P*((pow(1+R/100,T)));
    CI=A-P;
    cout<<"Compound Interset is:\t"<<CI;
    return 0;

}