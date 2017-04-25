#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char ln[5];
    cout<<"Escribe un operador(+,-,*,/) y dos numeros:";
    gets(ln);
    int a=ln[2]-'0';
    int b=ln[4]-'0';
    if(ln[0]=='+'){
        cout<<"El resultado es:"<<a+b<<endl;
    }else if(ln[0]=='-'){
        cout<<"El resultado es:"<<a-b<<endl;
    }else if(ln[0]=='*'){
        cout<<"El resultado es:"<<a*b<<endl;
    }else if(ln[0]=='/'){
        cout<<"El resultado es:"<<a/b<<endl;
    }

    return 0;
}
