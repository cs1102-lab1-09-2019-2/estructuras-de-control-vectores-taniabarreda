#include <iostream>
#include <vector>
#include <iomanip>
#include<unordered_map>
using namespace std;

int moda(vector<int> &lista);
vector<int> leerConsole();

vector<int> leerConsole() {
    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
    cout<<"Ingrese numeros positivos, escriba -1 si ya no quiere ingresar mas numeros:\n";
    std::vector<int> lista;
    int x=0;
    while(x!=-1){
        cin>>x;
        if (x!=-1)
            lista.push_back(x);
    }
    return lista;
}
int moda(vector<int> &lista) {
    //La moda es el elemento que mas se repite en la lista de elementos
    unordered_map <int, int>umap;
    for(int i=0; i<lista.size();i++){
        umap[lista[i]]++;
    }
    int moda,max=0;
    for(auto &it:umap){
        if(it.second> max){
            max =it.second;
            moda=it.first;
        }
    }
    return moda;
}


int main() {
    cout<<"Calcular la moda de los numeros ingresados\n\n";
    vector<int> leer_usuario = leerConsole();
    int moda_elemento = moda(leer_usuario);
    cout<<"La moda es: "<<moda_elemento<<"\n";
}
