//Passagem de parâmetros por referência 2
/*
Faça uma função que converta uma determinada temperatura, dada em graus Fahrenheit (F) para 
o equivalente em graus Celsius (C) e Kelvin (K). As fórmulas de conversão são:

C = 5/9 (F − 32)
K = C + 273

A função deve ter o seguinte cabeçalho:

void converte(float F, float &C, float &K)

Depois, faça um programa que leia uma temperatura em graus Fahrenheit e mostre o valor equivalente 
nas outras duas escalas.

Entrada:
A entrada consiste de um único número real F.

Saída:
Na saída, o programa deve apresentar a temperatura correspondente em graus Celsius (C) e Kelvin (K), 
com duas casas decimais.

Exemplos de Entrada:          Exemplos de Saída:
23.5	                      Celsius: -4.72
|                             Kelvin: 268.28
*/

#include <iostream>
#include <iomanip>
using namespace std;

void converte(float F, float &C, float &K){
    
    C = (5.0/9.0) * (F - 32);
    K = C + 273;
    
    return;
}

int main(){
    
    float F, C, K;
    
    cin>>F;
    
    converte(F, C, K);
    
    cout<<fixed<<setprecision(2);
    cout<<"Celsius: "<<C<<endl;
    cout<<"Kelvin: "<<K<<endl;    
    
    return 0;
}