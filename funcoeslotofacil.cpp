#include <iostream>
#include <windows.h>
#include <cstring>
#include <time.h>
#include <stdlib.h>

using namespace std;

int cartelavazia(int cartela[])
{
    for (int i = 0; i < 25; i++)
    {
        cartela[i] = i + 1;
        cout << cartela[i] << " ";
    }
    cout << endl;
    return 0;
}
int preencheaposta(int aposta[], int n)
{
    int aposta;
    cout << "Voce quer preencher sua aposta ou prefere que o sistema preencha? (1=sim, 2=nao) ";
    cin >> n;
    if (n == 1)
    {
        cout << "Digite os numeros da cartela que voce quer preencher: ";
        for (int i = 0; i < 15; i++)
        {
            cin >> aposta[i];
        }
    }
    else if (n == 2)
    {
        srand(time(NULL));
        for (int i = 0; i < 15; i++)
        {
            aposta[i] = rand() % 25 + 1;
        }
    }
    else
    {
        cout << "Opcao invalida!" << endl;
    }
}
int sorteiacartela(int cartela[])
{
    srand(time(NULL));
    for (int i = 0; i < 15; i++)
    {
        cartela[i] = rand() % 25 + 1;
    }
}
int verifica(int cartela[], int aposta[])
{
    int cont = 0;
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if (cartela[i] == aposta[j])
            {
                cont++;
            }
        }
    }
    return cont;
}
