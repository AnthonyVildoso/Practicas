#include <iostream>
using namespace std;

int reversa(int* l[],int tm)
{
    int temp;
    int tp=tm-1;
    for(int x=0;x<(tm/2);x++){
        /*temp = *l[x];
        *l[x] = *l[tp];
        *l[tp] = temp;*/
        tp-=1;
    }
    return 0;
}

int main()
{
    int lis[6]={1,2,3,4,5,6};
    reversa(*lis,6);
    /*cout<<"Lista revertida:";
    for(int i=0;i<6;i++){
        cout<<lis[i];
    }*/

    return 0;

}
