//FOR-H
/*
Sendo H= 1 + 1/2 + 1/3 + ⋯ + 1/N, construa um programa que calcule o valor de H para um 
dado valor de N. 

Entrada:
Um inteiro N (N <=1000)

Saída:
O programa deve apresentar o valor calculado para H, com 4 casas decimais.

Exemplos de Entrada:       Exemplo de Saída:
1                          1.0000
4                          2.0833
8                          2.7179
11	                       3.0199
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n; 
    double h = 0.0;
    
    do{
        cin>>n;
    }while(n < 0 || n > 1000);
    
    for(int i = 1; i <= n; i++){
        h += 1.0 / i;
    }
    
    cout<<fixed<<setprecision(4)<<h<<endl;
    
    return 0;
}