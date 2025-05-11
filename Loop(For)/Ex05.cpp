//Seno e cosseno
/*
Escreva um programa que leia dois números reais N1 e N2, correspondentes aos limites inferior e 
superior de um intervalo para um ângulo θ, e verifique para quais valores de θ
a expressão sinθ cosθ é positiva. Faça a verificação para θ∈[N1,N2], com intervalos de 0,1 radianos.

Entrada:
Dois valores reais N1 e N2, sendo que N1 < N2.

Saída:
O programa deve apresentar o intervalo onde a expressão sinθcosθ é positiva. Os limites inferior e 
superior do intervalo devem ser apresentados com 1 casa decimal.

Exemplos de Entrada:      Exemplos de Saída:
0 2                       0.1 a 1.5
3 5	                      3.2 a 4.7
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    double n1, n2;
    
    do {
        cout << "Digite dois valores (n1 < n2): ";
        cin >> n1 >> n2;
        if (n1 >= n2) {
            cout << "O primeiro valor deve ser menor que o segundo!" << endl;
        }
    } while (n1 >= n2);
    
    for (double theta = n1; theta <= n2; theta += 0.1) {
        // Verificando se o produto de sin e cos é positivo
        if (sin(theta) * cos(theta) > 0) {
            // Exibindo o intervalo
            cout << theta << " a " << theta + 0.1 << endl;
        }
    }
    
    return 0;
}

//CODIGO ERRADO - Nem mesmo o chat GPT foi capaz de resolver essa bomba
