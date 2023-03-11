#include "iostream"
#include "fstream"
using namespace std;
string texto;

void leerArchivo1(string directorio){
    ifstream archivo;
    archivo.open(directorio);
    if (archivo.is_open()){
        while (getline(archivo,texto)){
            cout << "archivo leido ==>" << texto << endl;
        }
        archivo.close();
    }else {
        cout << "archivo no encontrado" ;
    }
}

void agregarTexto(char directorio){
    ofstream archivo;
    archivo.open("datos.txt", ios::app);
    if (archivo.is_open()) {
        archivo << "Este es un nuevo texto que se agrega al final del archivo." << endl;
        archivo.close();
        cout << "Texto agregado al archivo." << endl;
    }
    else {
        cout << "Error al abrir el archivo." << endl;
    }
}

