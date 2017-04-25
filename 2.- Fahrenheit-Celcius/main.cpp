#include <iostream>

using namespace std;

int main()
{
    int fah=0;
    cout<<"Fahrenheit/ Celcius"<<endl;
    while(fah<=300){
        cout<<"- "<<fah<<"   = "<<(fah-32)/1.8<<endl;
        fah+=20;
    }
    return 0;
}
