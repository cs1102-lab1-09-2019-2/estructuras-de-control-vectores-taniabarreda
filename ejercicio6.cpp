#include <iostream>

using namespace std;
/*
 Leer tres numeros del usuario separados por espacio: 10 15 20
 Y encuentra el mayor valor: 30
 */
int main(){
    int a,b,c;
    cout<<"  Hallar el numero mayor\n";
    cout<<"***************************\n";
    cout<<"Ingresar tres numeros\n";
    cin>>a>>b>>c;

    if (a>b||a==b)
        if (a>c||c==a)
            cout<<"El numero mayor es:"<<a;
        else
            cout<<"El numero mayor es:"<<c;
    else
    if (b>c||c==b)
        cout<<"El numero mayor es:"<<b;
    else
        cout<<"El numero mayor es:"<<c;

}