#include <iostream>
using namespace std;
int binario(int n){
    cout<<"Digite um numero: ";
    cin>>n;
    cout<<"o numero em binario e: ";
    while(n>0){
        cout<<n%2;
        n=n/2;
    }
    return 0;
}