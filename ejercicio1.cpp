#include<iostream>
#include <vector>
#include <iomanip>
using namespace std;


//float promedio(vector<int> &lista);
//vector<int> leerConsola();

std::vector<int> leerConsola() {
    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
    cout<<"Ingrese numeros positivos, escriba -1 si ya no quiere ingresar mas numeros:\n";
    std::vector<int> lista;
    int x=0;
    while(x!=-1){
        cin>>x;
        if (x!=-1)
            lista.push_back(x);

    }

    return lista ;
}

float promedio(vector<int> &lista) {
    //El promedio es la suma de todos los elementos dividido entre el total de elementos
    float suma=0;
    int n,o=0;
    int max=lista.size();



    for(int j=0;j<max;j++){
        suma=suma+lista[j];
    }


    suma=suma/max;
    return suma;
}

int main() {
    cout<<"Calcular el promedio de los ingresados\n\n";
    vector<int> leer_usuario = leerConsola();
    float promedio_elemento = promedio(leer_usuario);
    cout<<"El promedio es: "<<fixed<<setprecision(2)<<promedio_elemento<<"\n";
}