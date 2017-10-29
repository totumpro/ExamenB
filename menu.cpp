#include <iostream>
#include <stdio.h>

#include "suma.h"

using namespace std;

int main() {
    int opt = 1;
    do {
        cout << "Selecciona una opcion" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;
        cout << "5. Salir " << endl;
        
        /*Agregar condiciones a continuacion... */

        cout << suma(1,2) << endl;
    }while(opt!=5);
    

    return 0;
}