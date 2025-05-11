//Passagem de parâmetros por referência 3
/*
Faça uma função que receba duas variáveis inteiras X e Y e troque os valor delas.
A função deve ter o seguinte cabeçalho:

void troca(int &X, int &Y)

Depois, faça um programa que leia dois inteiros, armazene-os em X e Y, e mostre os valores 
destas variáveis depois de trocados seus valores.

Entrada:
A entrada consiste de dois inteiros X e Y.

Saída:
Na saída, o programa deve apresentar os valores de X e Y, depois de passar estas variáveis 
pela função troca().

Exemplos de Entrada:    Exemplos de Saída: 
23 5                    5 23
*/

#include <iostream>
using namespace std;

void troca(int &X, int &Y){
    int var_aux;
    
    var_aux = X;
    X = Y;
    Y = var_aux;
    
    return;
}

int main(){
    
    int x, y;
    
    cin>>x>>y;
    
    troca(x, y);
    
    cout<<x<<" "<<y<<endl;
    
    return 0;
}
