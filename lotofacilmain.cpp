#include <iostream>
#include <windows.h>
#include <cstring>
#include <time.h>
#include <stdlib.h>
#include "funcoeslotofacil.hpp"
using namespace std;

int main()
{
    int resultado = 0;
    int cartela[15], aposta[15], n;
    cout << "-x-x-x-x-x-x-x-x-x-LOTO FACIL-x-x-x-x-x-x-x-x-x-x-" << endl;
    cartelavazia(cartela);
    preencheaposta(aposta, n);
    sorteiacartela(cartela);
    resultado = verifica(cartela, aposta);
    cout << "Voce acertou " << resultado << " numeros!" << endl;
    return 0;
}