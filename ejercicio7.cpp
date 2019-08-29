/*
 El usuario puede escoger de 5 opciones (de 1 a 5). Entonces pregunta por dos
 valores enteros para el calculo

 MENU:
 1.- suma
 2.- resta
 3.- multiplicar
 4.- dividir
 5.- modulo

 Ingresa una opcion: 1
 Ingresa los dos numeros: 5 96
 Resultado: 111

 Continuar? y

 // Si el usuario ingresa 'y' a la pregunta Continuar? el usuario puede escoger otra opcion.

 */

#include <iostream>
#include <stdexcept> //Validar en la division por 0
#include <cmath>
using std::cout;
using std::cin;
using std::invalid_argument;

void mostrarMenu();
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);
int modulo(int a, int b);

int sumar(int a, int b){
    int suma=a+b;
    return suma;
}
int restar(int a, int b){
    int resta=a-b;
    return resta;
}
int multiplicar(int a, int b){
    int multiplicacion=a*b;
    return multiplicacion;
}
float dividir(int a, int b){
    float division=a/b;
    return division;
}
int modulo(int a, int b){
    int pitagoras=round(sqrt(pow(a,2)+pow(b,2)));
    return pitagoras;
}
void mostrarMenu() {
    cout<<"***************************************************\n";
    cout<<"                     MENU                          \n";
    cout<<"***************************************************\n";
    cout<<"  1.- Sumar\n";
    cout<<"  2.- Restar\n";
    cout<<"  3.- Multiplicar\n";
    cout<<"  4.- Dividir\n";
    cout<<"  5.- Modulo\n";
    return;
}


int main() {
    int x,y,z;
    char w;
    mostrarMenu();
    do{
        cout<<"Eliga una opcion del menu: ";cin>>x;
        cout<<"Ingrese el primer numero: ";cin>>y;
        cout<<"Ingrese el segundo numero: ";cin>>z;

        if (x==1){
            cout<<sumar(y,z);
            cout<<"\n Continuar?";
            cin>>w;
        }
        if (x==2){
            cout<<restar(y,z);
            cout<<"\n Continuar?";
            cin>>w;
        }
        if (x==3){
            cout<<multiplicar(y,z);
            cout<<"\n Continuar?";
            cin>>w;
        }
        if (x==4){
            cout<<dividir(y,z);
            cout<<"\n Continuar?";
            cin>>w;
        }
        if (x==5){
            cout<<modulo(y,z);
            cout<<"\n Continuar?";
            cin>>w;
        }
    }while(w=='y');



    return 0;
}
