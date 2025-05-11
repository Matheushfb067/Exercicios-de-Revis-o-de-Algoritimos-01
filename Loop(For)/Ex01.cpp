//For Sequancia de Fibonacci:
/*
A Sequência de Fibonacci consiste em uma sucessão de números, tais que, definindo os 
dois primeiros números da sequência como 0 e 1, os números seguintes serão obtidos por 
meio da soma dos seus dois antecessores. Portanto, os números são: 0, 1, 1, 2, 3, 5, 8, 
13, 21, 34, 55, 89, 144, 233, 377, 610, 987,1597, 2584, 4181...

Dessa sequência, ao se dividir qualquer número pelo anterior, extrai-se a razão que é um 
"número irracional algébrico" conhecido como número de ouro, denotado com o símbolo "φ".

A sua tarefa é fazer um programa que gere os N primeiros termos da sequência de Fibonacci

Entrada:
A entrada consiste de um único inteiro N, que corresponde ao número de termos da sequência 
que devem ser mostrados (0<N<100).

Saída:
A saída deve mostrar os N primeiros da sequência de Fibonacci.

Exemplo de entrada:            Exemplo de Saída: 
2                              0 1
5                              0 1 1 2 3
8	                           0 1 1 2 3 5 8 13  
*/

#include <iostream>

using namespace std; 

// 1°  2°  3°  4°  5°  6°  7°...
// 0 - 1 - 1 - 2 - 3 - 5 - 8 -... 
//         AT                    //antual
//     A1                        //ant1
// A2                            //ant2

int main(){
    int i, ant1, ant2, atual;//ant = anterior
    int n; 
    
    ant1 = 1;
    ant2 = 0;
    
    cin>>n;
    
    cout<<ant2<<" "<<ant1<<" ";
    for(i = 3; i <= n; i++){//i começa e 3 pois ant1 e ant2 já foram inicializados com os 2 primeiros termos da sequencia
        atual = ant1 + ant2;//3° termo
        ant2 = ant1;
        ant1 = atual;/*necessario atualizar o valor da segunda posição, antes de 
        atualizar ant1, uma vez que se atualizarmos o ant1 primeiro, ele recebera 
        o valor de atual, consequentemente o valor de tanto ant1 quanto ant2 seriam 
        o mesmo que o atual.*/
        cout<<atual<<" ";
    }
    
    return 0; 
}