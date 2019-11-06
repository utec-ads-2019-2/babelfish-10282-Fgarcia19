#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string,string> diccionario;
    string entrada;
    getline(cin,entrada);
    while(entrada!="") {
        string palabra, significado;
        int i = 0;
        while (entrada[i] != ' ') {
            palabra += entrada[i];
            i++;
        }
        i++;
        while (i != entrada.size()) {
            significado += entrada[i];
            i++;
        }
        diccionario[significado] = palabra;
        getline(cin, entrada);
    }
    string buscar;
    while(cin>>buscar)
    {
        if(diccionario[buscar]=="")
        {
            cout<<"eh"<<endl;
            diccionario.erase(buscar);
        }
        else
        cout<<diccionario[buscar]<<endl;
    }
}