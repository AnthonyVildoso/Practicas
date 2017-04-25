#include <iostream>
using namespace std;

int inser(int l[]){
    int i,key;
    for(int j=2;j<6;j++){
        key=l[j];
        i=j-1;
        while(i>0 && l[i]>key){
            l[i+1]=l[i];
            i=i-1;
        }
        l[i+1]=key;
    }
    return 0;
}
int main(){
    int lis[6]={1,5,4,3,6,2};
    cout<<"-Lista original:";
    for(int x=0;x<6;x++)
        cout<<lis[x];
    cout<<"\n\n";
    inser(lis);
    cout<<"-Lista arreglada:";
    for(int x=0;x<6;x++)
        cout<<lis[x];
    return 0;
}
