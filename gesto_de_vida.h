#pragma once
#include<iostream>
using namespace std;

class gesto_de_vida
{
public:
    gesto_de_vida(int vidaMaxima) : vidasDeInicio(vidaMaxima), vidasPerdidas(0), vidasRestantes(vidaMaxima) {}

    int mostrarVida() const {
        return vidasRestantes;
    }
private:
    int vidasDeInicio = 3;
    int vidasPerdidas;
    int vidasRestantes;
};

int main() {
    gesto_de_vida vida(3);
    cout << "Vidas restantes: " << vida.mostrarVida() << endl;
    return 0;
}

