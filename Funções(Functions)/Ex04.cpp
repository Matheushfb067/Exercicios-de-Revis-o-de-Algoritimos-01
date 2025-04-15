//Delta
/*
Crie uma função que receba três valores, 'a', 'b' e 'c', que são os 
coeficientes de uma equação do segundo grau (ax2+bx+c=0) e retorne o 
valor do delta, que é dado por 'b² - 4ac'

Entrada:
Três números reais, que correspondem aos coeficientes de uma equação do 
segundo grau. Garante-se que nunca teremos a=0.

Saída:
O valor de delta, conforme descrito acima

Exemplos de Entrada:      Exemplos de Saída: 
2 3 1                     delta = 1
1 0 1                     delta = -4
1 0 0                     delta = 0
*/

#include <iostream>
#include <cmath>
using namespace std;

double delta(double a, double b, double c){
    double delta;
    
    delta = pow(b, 2) - 4 * a * c;
    
    return delta;
}

int main(){
    
    double a, b, c;
    double d;
    
    do{
        cin>>a>>b>>c;
    }while(a == 0);
    
    d = delta(a, b, c);    
    
    cout<<"delta = "<<d<<endl;
    
    return 0;
}