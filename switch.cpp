#include<iostream>
using namespace std;
int main(){
    int a,b,c,choice;
    cout<<"Enter two inteager:";
    cin>>a>>b;
    cout<<"\nMenu:\n";
    cout<<"Check Equality\n";
    cout<<"Display larger number";
    cout<<"Check whether both are +ve\n";
    cout<<"Check wheather at least one\n";
    cout<<"Enter Choice";
    cin>>choice;
    switch (choice)
    {
    case 1:
    if(a==b)
    cout<<"Both numbers are equal";
    else
    cout<<"The Number are not Equal";
    break;
    case 2:
    if(a>b)
    cout<<"Large number is"<<a;
    else if(b>a)
    cout<<"Large Number is"<<b;
    else
    cout<<"both are equal";
    break;
    case 3:
    if(a>0&&b>0)
    cout<<"Both are positive";
    else
    cout<<"Both are -ve";
    break;
    case 4:
    if(a==0 || b==0)
    cout<<"One number is zero";
    else
    cout<<"neither number is zero";
      break;
         
    default:
    cout<<"Invalid";
        break;
       
      
 
    }
    return 0;
}