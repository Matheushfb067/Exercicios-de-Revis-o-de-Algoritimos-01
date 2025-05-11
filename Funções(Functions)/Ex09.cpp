//Equação do segundo grau
/*
Usando as funções dos 2 exerícios anteriores, faça um programa que receba três valores, 'a', 'b' e 'c', 
que são os coeficientes de uma equação do segundo grau (ax2+bx+c=0), calcule e retorne as suas raízes.
Entrada:
Três números reais, que correspondem aos coeficientes de uma equação do segundo grau. Garante-se que nunca 
teremos a=0.

Saída:
As raízes da equação, se existirem, ou uma mensagem avisando que não há raízes reais. Se houverem duas raízes, 
a menor raiz deve ser apresentada primeiro.

Exemplos de Entrada:         Exemplos de Saída:
2 3 1                        x1 = -1.00
|                            x2 = -0.50
1 0 1                        Nao ha raizes reais
1 0 0                        x = 0
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void troca(double &x, double &y) {
    double temp = x;
    x = y;
    y = temp;
}

void bhaskara(double &a, double &b, double &c, double &x1, double &x2, double &delta){
    
    delta = pow(b, 2) - 4 * a * c;
    
    if(delta >= 0){
        x1 = (-(b) + sqrt(delta)) / (2 * a);
        x2 = (-(b) - sqrt(delta)) / (2 * a);
    }
    
    return;
}


int main(){
    
    double a, b, c;
    double x = 0, x1, x2, delta;
    
    do{
        cin>>a>>b>>c;
    }while(a == 0);
    
    bhaskara(a, b, c, x1, x2, delta);
    
    if(delta < 0){
        cout<<"Nao ha raizes reais"<<endl;    
    }
    else if(x1 == 0 && x2 == 0)
            cout<<"x = "<<x<<endl;
    else {
        if(x1 > x2)
            troca(x1, x2);
            
        cout<<fixed<<setprecision(2);
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl; 
    }
    
    return 0; 
}
