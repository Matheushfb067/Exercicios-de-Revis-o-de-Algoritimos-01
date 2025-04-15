//Pesquisa
/*
Faça um programa que leia vários números inteiros e os armazene em um vetor.
Depois o programa deve ler um único número X e verificar se este está ou não no vetor.

Entrada
-A primeira linha da entrada consiste de vários números inteiros, terminando com o número 0 
(zero), que indica que a entrada de dados terminou. O zero não deve ser inserido no vetor. 
Você pode admitir que a entrada não vai ter mais que 100 números.
-Na segunda linha, tem-se um único número inteiro X, que é o elemento a ser pesquisado.

Saída
-A saída deve mostrar uma mensagem informando se o elemento X foi encontrado ou não no 
vetor. Ainda, se ele for encontrado, deve-se mostrar em que posição o mesmo foi encontrado.

Exemplos de Entrada:             Exemplos de Saída: 
10 5 6 2 -1 0                    Elemento 1 nao foi encontrado
1

5 4 7 3 -2 0                     Elemento 0 nao foi encontrado
0

2 -1 3 -4 10 20 0                Elemento -4 encontrado na posicao 3
-4
*/

#include <iostream>
using namespace std;

int main(){
    
    int num; 
    int vet[99], x, i, j, pos = -1;//posição
    
    for(i = 0; i < 99; i++){
        cin>>num;
        if(num == 0)
            break;
        else
            vet[i] = num;
    }
    
    cin>>x;
    
    for(j = 0; j < i; j++ ){
        if(vet[j] == x)
            pos = j;
    }
    
    if(pos != -1)
        cout<<"Elemento "<<x<<" encontrado na posicao "<<pos<<endl;
    else
        cout<<"Elemento "<<x<<" nao foi encontrado";
    
    return 0;
}