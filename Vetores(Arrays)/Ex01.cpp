//Facebook
/*
O Facebook serve pra gente encontrar velhos amigos, parentes que nem 
conhecemos, saber por onde andam as pessoas, e muitas outras coisas.
Há pessoas que têm muitos amigos na rede social, e outras que preferem 
ter contato apenas com os mais chegados.
Para entender um pouco mais esta dinâmica, o Mark Zucherberg pediu pra 
você armazenar o número de amigos dos usuários do facebook em um vetor, 
e mostrar o maior e o menor número armazenado neste.

Entrada:
A primeira linha da entrada consiste de um único número inteiro, que corresponde 
ao número de usuários do facebook (0<N<1000).

Na segunda linha, tem-se N números inteiros, que indicam o número de contatos de cada pessoa.

Saída:
A saída deve mostrar o menor e o maior valor do vetor.

Exemplo de entrada:                    Exemplo de Saída: 
10                                     Menor numero de contatos: 9
10 50 21 400 2043 43 128 291 9 355     Maior numero de contatos: 2043      
*/

#include <iostream>
using namespace std; 

int main(){
    
    int num_users, ma, me;//numero de usuarios, maior, menor    
    int vet[100];

    do{
        //cout<<"Entre com o numero de usuarios: ";
        cin>>num_users;
    }while(num_users < 0 || num_users > 100);    
    
    
    for(int i = 0; i < num_users; i++){
        cin>>vet[i];
    }
    
    
    ma = vet[0];
    me = vet[0];
    
    for(int i = 1; i < num_users; i++){
        if(vet[i] > ma)
            ma = vet[i];
        if(vet[i] < me)
            me = vet[i];
    }
    
    cout<<"Menor numero de contatos: "<<me<<endl;
    cout<<"Maior numero de contatos: "<<ma<<endl;
    
    return 0;
}