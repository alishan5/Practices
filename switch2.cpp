#include<iostream>
using namespace std;
int main(){
    int age,categ;
    double price;
    cout<<"Enter Ticket category,(1.standered,2.premium,3.VIP)";
    cin >> categ;
    cout<<"enter age";
    cin>>age;
    switch(categ){
        case 1 :
        price =500;
        break;
        case 2:
        price = 800;
        break;
        case 3:
        price=1200;
        break;
        default:
        cout<<"invalid option";

    }
    if(age < 12 || age >= 60)
    {
    price=price*0.80;
    }
    cout<<"Finial Price Rs."<<price;
    cout<<endl;
    return 0;
}