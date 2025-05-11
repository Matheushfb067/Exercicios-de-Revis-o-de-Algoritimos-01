//Passagem de parâmetros por referência 1
/*
Faça uma função que receba dois números inteiros e retorne a média geométrica deles, em um 
parâmetro passado por referência. O cabeçalho desta função deve ser:

void media(int x, int y, float &m)
Depois, faça um programa que leia dois números inteiros, e imprima na saída a média geométrica 
deles, calculada por esta função. A média geométrica é dada por √X⋅Y.

Entrada:
A entrada consiste de dois números inteiros X e Y (X≥0,Y≥0).

Saída:
Na saída, o programa deve apresentar a média geométrica de X e Y, com duas casas decimais.

Exemplos de Entrada:    Exemplos de Saída:
2 3	                    Media: 2.45
4 0	                    Media: 0.00
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void media(int &x, int &y, float &m){
    
    m = sqrt(x * y);
    
    return;
}

int main(){
    
    int x, y; 
    float m;
    
    do{
        cin>>x>>y;
    }while(x < 0 && y < 0);
    
    media(x, y, m);
    
    cout<<fixed<<setprecision(2);
    cout<<"Media: "<<m<<endl;
    
    return 0;
}
