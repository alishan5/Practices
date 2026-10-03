#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c,disc,X,x1,x2;
    cin>>a;
    cin>>b;
    cin>>c;
    disc=(b*b)- (4*a*c);
    if(disc==0)
    {
        X=-b/(2*a);
        cout<<X;
    }
    else if(disc>0)
    {
        x1=(-b+ sqrt(disc))/(2*a);
        x2=(-b- sqrt(disc))/(2*a);
        cout<<x1<<endl;
        cout<<x2<<endl;
         

        
    }
    else
    {
        cout<<"No real roots"<<endl;
        
    }
    return 0;

}