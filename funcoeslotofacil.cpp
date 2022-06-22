#include <iostream>
#include <windows.h>
#include <cstring>
#include <time.h>
using namespace std;

int mostraepreenchecartela(int cartela[25], int n){
    for(int i=0; i<=25; i++){
        cartela[i]=i+1;
        cout<<cartela[i]<<" ";
    }
    cout<<endl;
    return 0;
}
int sorteio(int cartela[25], int n){
    srand(time(NULL));
    for(int i=0; i<=15; i++){
        cartela[i]=rand()%25+1;
    }
}
int preencheaposta(int cartela[25], int n){
    int aposta;
    cout<<"Voce quer preencher sua aposta ou prefere que o sistema preencha? (1=sim, 2=nao) ";
    cin>>n;

}