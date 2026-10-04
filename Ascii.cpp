#include<iostream>
using namespace std;
int main(){
    /*char ch = 'A';
    cout<<"Charcter:"<<ch<<endl;
    cout<<"ASCII VALUE :"<<int(ch);
    return 0;*/

    cout<<"Charcter\tASCII Valaue\n";
    for(char ch='A';ch <= 'Z';ch++){
        cout<< ch <<"\t\t"<<int(ch)<<endl;
    }
}