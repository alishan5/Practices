#include<iostream>
using namespace std;
int main(){
    int n,result;
    cout<<"Enter a Number";
    cin>>n;
    result = n & 1;
    if(result==0){
        cout<<"Even"<<endl;
        
    }
    else {
        cout<<"odd"<<endl;

    }
    return 0;



}