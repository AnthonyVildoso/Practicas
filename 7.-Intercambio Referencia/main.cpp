#include <iostream>

using namespace std;

int intercambio(int &a,int &b){
    a=b-a;
    b=b-a;
    a=a+b;
    return 0;
}

int main(){
    int a,b;
    cout<<"Introduce el primer valor a:";
    cin>>a;
    cout<<"Introduce el segundo valor b:";
    cin>>b;
    intercambio(a,b);
    cout<<"-a ahora es:"<<a<<endl;
    cout<<"-b ahora es:"<<b<<endl;
    return 0;
}
