#include <iostream>
#include <windows.h>
#include "funcoes.hpp"

using namespace std;

int main(){
    cout<<"Testando modulo de funcoes"<<endl;
    cout<<"Soma: "<<soma(3,5)<<endl;
    cout<<"Subtracao: "<<subtracao(10,2)<<endl;
    cout<<"Multiplicacao: "<<multiplicacao(9,4)<<endl;
    cout<<"Divisao: "<<divisao(30,5)<<endl;
    cout<<"Resto: "<<resto(23,7)<<endl;
    return 0;
}