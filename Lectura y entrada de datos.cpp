//Lectura y entrada de datos
//este programa permite ingresar un numero y mostrarlo en pantalla

#include <iostream>

using namespace std;

int main() { /*se determina el tipo de variable primero y despues se asigna un valor */
    float numero;

    cout << "diga un numero decimal: ";
    cin>> numero;

    cout << "\el numero que ingresaste es: "<<numero;



    return 0;
}