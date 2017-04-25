#include <iostream>

using namespace std;

int main()
{
    int nletra;
    string lis[10]={"cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"};
    while(1){
        cout<<"Escribe un numero:";
        cin>>nletra;
        if(nletra==-1){
            break;
        }if(nletra<0 || nletra>9){
            cout<<"Numero no permitido."<<endl;
        }else{
            cout<<lis[nletra]<<endl;
        }
    }
    return 0;
}
