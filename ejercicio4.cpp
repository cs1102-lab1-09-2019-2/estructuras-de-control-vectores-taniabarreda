/*
Escribir un programa que imprima lo siguiente:

12*****
123****
1234***
12345**
123456*
1234567

*/
#include <iostream>
using namespace std;
int main() {
    int y=5,a,b=2,c=1;

    for (int i=1;i<7;i++){
        a=7-y;
        y--;

        for (int x=0;x<b;x++){
            cout<<c+x;
        }

        for(int j=0;j<=y;j++){
            cout<<"*";}

        b++;
        cout<<"\n";
    }
}
