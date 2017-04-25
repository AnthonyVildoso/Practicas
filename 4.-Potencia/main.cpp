#include <iostream>

using namespace std;

int potencia(int a,int b)
{
    int pot=a;
    for(int x=1;x<b;x++){
        a=a*pot;
    }
    return a;
}

int main()
{
    int bas,exp;
    cout<<"Introduce la base:";
    cin>>bas;
    cout<<"Introduce el exponente:";
    cin>>exp;
    cout<<"El resultado es:"<<potencia(bas,exp)<<endl;
    return 0;
}
