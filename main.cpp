#include <iostream>
using namespace std;
int numero;

int multi, a=1;

int main ()
{
    cout << "Ingrese el numero de la tabla que quieras saber" << endl ;
    cin >> numero ;
    do {
        multi = numero * a;
        cout << numero <<  "x" << a << "=" <<multi <<endl;
        a++;
    } while (a<=10);
    cout <<"------------------" << endl;
    int multi2;
    cout << "Aqui estan las tablas del 5, 8 y 9" << endl ;
        int  b=1, c=1, d=1;
        cout <<"------------------" << endl;
        do {
            multi2 = 5*b;
            cout <<"5"<<  "x" << b << "=" <<multi2 <<endl;
            b++;
        } while (b<=10);
        cout <<"------------------" << endl;
        do {
            multi2 = 8*c;
            cout <<"8"<<  "x" << c << "=" <<multi2 <<endl;
            c++;
        } while (c<=10);
        cout <<"------------------" << endl;
        do {
            multi2 = 9*c;
            cout <<"9"<<  "x" << c << "=" <<multi2 <<endl;
            c++;
        } while (c<=10);
        cout <<"------------------" << endl;


        int dia;
        cout <<"Ingresa un numero del 1 al 7 para saber si es un dia laboral" << endl;
        cin >> dia;

        switch (dia) {
            case 1:
                cout <<"------------------" << endl;
                cout <<"Lunes es dia laboral" << endl;
                break;
            case 2:
                cout <<"------------------" << endl;
                cout <<"Martes es dia laboral" << endl;
                break;
            case 3:
                cout <<"------------------" << endl;
                cout <<"Miercoles es dia laboral" << endl;
                break;
            case 4:
                cout <<"------------------" << endl;
                cout <<"Jueves es dia laboral" << endl;
                break;
            case 5:
                cout <<"------------------" << endl;
                cout <<"viernes es dia laboral" << endl;
                break;
            case 6:
                cout <<"------------------" << endl;
                cout <<"Sabdo es dia laboral " << endl;
                break;
            case 7:
                cout <<"------------------" << endl;
                cout <<"Domingo No es dia laboral puedes descansar" << endl;
                break;

        }
    cout <<"---------------------" << endl;
    cout <<"---------------------" << endl;

    }

