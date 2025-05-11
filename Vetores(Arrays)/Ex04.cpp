//La Casa De Papel
/*
La casa de papel é a série não americana de maior sucesso no Netflix, embora tenha gente que odiou.
Depois de uma séria discussão se a série era boa ou não, resolveram fazer uma pesquisa de opinião: 
quem gostou dava um like, e quem não gostou dava um dislike no facebook.
O seu trabalho é fazer um programa que veja se a série é boa ou não, na opinião da galera

Entrada:
-A primeira linha da entrada consiste de um único número inteiro, que corresponde ao número de votos (0<N<1000).
-Na segunda linha, tem-se N números inteiros, que indicam se a pessoa gostou (+1) ou não (-1) da série.

Saída:
-A saída deve mostrar o resultado da enquete.

Exemplos de Entrada:          Exemplos de Saída:
10                            A maioria gostou
1 -1 -1 1 -1 1 1 1 -1 1
10                            A maioria nao gostou
-1 -1 -1 -1 -1 -1 1 1 1 -1
6                             Deu empate
1 1 1 -1 -1 -1
*/

#include <iostream>
using namespace std; 

int main(){
    
    int num_votos;
    int vet[100], sg = 0, ng = 0;//votos, sim gostei, não gostei
    
    do{
        cin>>num_votos;
    }while(num_votos < 0 || num_votos > 100);
    
    for(int i = 0; i< num_votos; i++){
        do{
            cin>>vet[i];
        }while(vet[i] != 1 && vet[i] != -1);
    }
            
    for(int i = 0; i < num_votos; i++){
        if(vet[i] == 1)
            sg++;
        if(vet[i] == -1)
            ng++;
    }
    
    if(sg > ng){
        cout<<"A maioria gostou";
    }
    else if(sg == ng)
        cout<<"Deu empate";
    else
        cout<<"A maioria nao gostou";
        
    
    return 0; 
}