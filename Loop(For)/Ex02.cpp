//3n+1
/*
Dado um número n:  

- se ele for par, divida-o por 2

- se ele for ímpar, multiplique-o por 3 e some 1.

Dada a entrada 22, a seguinte sequência de números será impressa: 

22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1 

Conjectura-se que o algoritmo acima irá terminar (quando um 1 for impresso) para qualquer valor inteiro. 
Apesar da simplicidade do algoritmo, não se sabe se esta conjectura é verdadeira. Entretanto, verificou-se 
que esta é verdadeira para todos os inteiros n tais que 0 < n < 1.000.000 

Dada uma entrada n, é possível determinar a quantidade de números impressos até que o número 1 seja impresso. 
Para um dado número n, esta é chamada de comprimento de ciclo de n. No exemplo anterior, o comprimento de ciclo 
de 22 é 16.

Para quaisquer números i e j, você deve determinar o comprimento de ciclo máximo de todos os números entre e incluindo 
i e j.

Entrada:
A entrada irá consistir de um par de inteiros i e j. Todos os inteiros serão menores que 10000 e maiores que 0. 
Você pode assumir que nenhuma operação irá produzir um overflow para inteiros de 32 bits.

Saída:
A saída deve apresentar i, j, e o maior comprimento de ciclo para os inteiros entre e incluindo i e j. Estes 
três números devem mostrados em uma única linha, e devem estar separados por um espaço em branco. Os inteiros i e j devem 
aparecer na saída na mesma ordem na qual apareceram na entrada.

Exemplos de Entrada:     Exemplos de Saída:
1 10                     1 10 20
100 200                  100 200 125
*/

#include <iostream>
using namespace std;

int func(int n){
    
    int contador = 1;
    
    while(n != 1){
        if(n % 2 == 0)
            n = n / 2;
        else 
            n = (n * 3) + 1;
            
        contador++;
    }
    
    return contador;
}

int main(){
    
    int i, j; 
    
    cin>>i>>j;
    
    int maior = 0;
        
    if (i <= j) {
        for (int k = i; k <= j; k++) {
            int ciclo = func(k);
            
            if(ciclo > maior)
                maior = ciclo;
        }
    } 
    else {
        for (int k = j; k <= i; k++) {
             int ciclo = func(k);
             
                if(ciclo > maior)
                maior = ciclo; 
        }  

    }
    
    cout<<i<<" "<<j<<" "<<maior<<endl;
    
    
    return 0; 
}
