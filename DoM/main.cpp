#include <iostream>
#include "enemigo/enemigo.h"
#include "enemigo/boss.h"
#include "enemigo/ghost.h"
#include "enemigo/goblin.h"
#include "enemigo/golem.h"
#include "jugador/jugador.h"
#include "torres/torre.h"
#include "torres/torrealcanceextendido.h"
#include "torres/torrearea.h"
#include "torres/torreataquerapido.h"
#include "torres/torrecongelacion.h"
#include "mapa/mapa.h"

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
    

    //Zona de pruebas:

    jugador miJugador("Player1", 0, 100, 100);

  
    cout << "Apodo del jugador: " << miJugador.getApodo() << endl;
    cout << "Puntuacion del jugador: " << miJugador.getPuntuacion() << endl;
    cout << "Soles del jugador: " << miJugador.getSoles() << endl;
    cout << "Vida del jugador: " << miJugador.getVida() << endl;

    torre torreA(50, 100, 80, 75);

    cout << "Alcance de ataque de TorreA: " << torreA.getAlcanceAtaque() << endl;
   
    torrealcanceextendido torreAE(80, 120, 90, 90, 10);
   
    cout << "Ataque base de torreAE: " << torreAE.getAtaqueBase() << endl;


    return 0;
}