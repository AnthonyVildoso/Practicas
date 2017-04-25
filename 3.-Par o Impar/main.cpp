#include <iostream>
using namespace std;

int main()
{
    int paridad;
    while(1){
        cout<<"Introduce un numero:";
        cin>>paridad;
        if(paridad==-1){
            break;
        }if(paridad%2==0){
            cout<<"Es par"<<endl;
        }else{
            cout<<"Es impar"<<endl;
        }
    }
    return 0;
}
