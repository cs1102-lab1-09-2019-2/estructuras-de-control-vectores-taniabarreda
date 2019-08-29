#include<iostream>
#include <vector>
#include <iomanip>
using namespace std;
int mediana(vector<int> &lista);
vector<int> leerConsola();

vector<int> leerConsola() {
    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
    cout<<"Ingrese numeros positivo, escriba -1 si ya no quiere ingresar mas numeros:\n";
    std::vector<int> lista;
    int x=0;
    while(x!=-1){
        cin>>x;
        if (x!=-1)
            lista.push_back(x);

    }

    return lista ;
}

int mediana(vector<int> &lista) {
    int a= lista.size();
    float m;
    /*
    Si el vector es 3, 9, 11, 15
    Si el número de observaciones es par,
     la mediana corresponde al promedio de los dos valores centrales.
     Por ejemplo, en la muestra 3, 9, 11, 15, la mediana es (9+11)/2=10.
     (v[4/2 -1] + v[4/2])/2 = (v[1] + v[2])/2 = (9+11)/2*/
    if (a%2==0)
        m=(lista[a/2 -1]+ lista[a/2])/2;

        /*Si el vector es 3, 9, 11, 15, 16
        Si el numero de observaciones es impar,
         Por ejemplo, en la muestra 3, 9, 11, 15, 16, la mediana es 11
         v[4/2] = v[2] = 11
         */
    else
        m=lista[a/2];
    return m;
}

int main() {
    cout<<"Calcular la mediana de los numeros ingresados\n\n";
    vector<int> leer_usuario = leerConsola();
    int mediana_elemento = mediana(leer_usuario);
    cout<<"La mediana es: "<<mediana_elemento<<"\n";

}