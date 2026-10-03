#include<iostream>
using namespace std;
int main(){

    int n,digit1,digit2,store=0;
    cout<<"Enter 2 digit potive number"<<endl;
    cin>>n;
    {
        digit1=n%10;
        digit2=n/10;
        store=(digit1*digit1)+(digit2*digit2);
    }
    if(n==1){
        cout<<"happy number"<<endl;
        
    }
    else
    {
        cout<<"not a happy number"<<endl;
    }
    return 0;


}