#include <iostream>

using namespace std;

int sumar(int a[],int b,int c){
    c+=a[b];
    if(b==0){
        return c;
    }else{
        return sumar(a,b-1,c);
    }
}

int main()
{
    int liss[]={1,2,3,4,5};
    cout<<"La suma de la lista es:"<<sumar(liss,4,0)<<endl;
    return 0;
}
