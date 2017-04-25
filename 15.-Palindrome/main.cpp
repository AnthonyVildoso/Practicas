#include <iostream>

using namespace std;

string palindrome(string a,int b)
{
    for(int x=0;x<5;x++){
        if(a[x]!=a[b]){
            return "False";
        }
        b-=1;
    }
    return "True";
}

int main()
{
    string pal="12321";
    cout<<"¿Los elementos son palindromes?:"<<palindrome(pal,4);
    return 0;
}
