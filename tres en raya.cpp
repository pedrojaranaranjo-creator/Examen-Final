#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class TresEnRaya {
private:
char tablero[9];
    string jugador1;
    string jugador2;
    char simboloActual;

public:
    TresEnRaya(string j1, string j2) {
        jugador1 = j1;
        jugador2 = j2;

        for (int i = 0; i < 9; i++) {
            tablero[i] = '1' + i;
        }

simboloActual = 'X';
    }

    void mostrarTablero() {
        cout << endl;

        for (int i = 0; i < 9; i++) {
            cout << " " << tablero[i] << " ";

            if ((i + 1) % 3 != 0) {
                cout << "|";
            }
if ((i + 1) % 3 == 0 && i != 8) {
                cout << endl;
                cout << "-----------";
                cout << endl;
            }
        }

        cout << endl << endl;
    }

    bool colocarFicha(int posicion) {

        if (posicion < 1 || posicion > 9) {
            cout << "Error: posicion fuera de rango." << endl;
            return false;
        }

        int indice = posicion - 1;

        if (tablero[indice] == 'X' || tablero[indice] == 'O') {
            cout << "Error: posicion ocupada." << endl;
            return false;
        }

                char verificadorGanador()
        