#include <iostream>
#include <array>
#include "enemigo.h"
#include "jugador.h"
#include "torres.h"
#include "mapa.h"

using namespace std;



string opcionesMenu[] = {"Iniciar juego", "Opciones", "Salir"};
const int opcionesNum = 3;


int mostrarMenu() {
    int eleccion;
    do {
        cout << "Menu Principal" << endl;
        for (int i = 0; i < opcionesNum; i++) {
            cout << i+1 << ". " << opcionesMenu[i] << endl;
        }
    
        cout << "\nIngrese su eleccion (1-" << opcionesNum << "): \n";
        cin >> eleccion;
    } while (eleccion < 1 || eleccion > opcionesNum);
    return eleccion;
}

int main() {
    int eleccion;
    do {

        eleccion = mostrarMenu();
        

        switch (eleccion) {
            case 1:
                cout << "\nIniciando juego...\n" << endl;
                break;
            case 2:
                cout << "\nMostrando opciones...\n" << endl;
                break;
            case 3:
                cout << "\nSaliendo del programa...\n" << endl;
                break;
        }
    } while (eleccion != opcionesNum);
    return 0;
}
