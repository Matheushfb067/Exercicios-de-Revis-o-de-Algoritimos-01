//Stormtroopers
/*
Os Stormtroopers são a tropa de base do Império Galáctico, e são montados a partir 
dos clones que participaram da derrubada da República.
Embora sejam clones, com o passar do tempo, começam a se diferenciar, por conta das 
diferentes missões que participam.
O Império criou então um conjunto de índices para controlar a eficácia de cada um dos 
membros desta tropa de elite. Estes indicadores são:

- Índice de Maldade (IM): mede o quão malvada é esta unidade
- Força de Abate (FA): proporcional ao número de inimigos abatidos
 
Temos uma missão importante para cumprir, então o comandante Darth Vader ordenou então que você 
fizesse um programa para cadastrar cada um dos Stormtroopers, e mostrar aquele mais apto para esta missão. 
O grau de aptidão (GA) pode ser calculado como a média aritmética dos dois índices acima.
Sugiro que você faça este programa rápido, e sem erros, senão você sabe o que vai acontecer...

Entrada: 
-Para cada Stormtrooper, tem-se uma linha na entrada. Esta linha consiste da identificação de cada 
soldado (um número inteiro), seu IM e seu FA (números reais entre 0 e 1).

-A entrada de dados termina quando for digitado um Id igual a zero.

Saída:
Id do Stormtrooper escolhido, e seu grau de aptidão, este com duas casas decimais.

Exemplos de Entrada:        Exemplos de Saída: 
2134 0.2 0.5                Stormtrooper escolhido: 4432
4432 0.7 0.8                GA = 0.75
6154 0.2 0.9
0
*/

#include <iostream>
#include <iomanip>
using namespace std; 

struct registro{
    int id; 
    double IM, FA, GA;
};

int main(){
    
    registro dados[100];
    int i = 0;
    double maior = -1, maisApto = -1; 
    
    cin>>dados[i].id;
    while(dados[i].id != 0){
        do{
            cin>>dados[i].IM;
            cin>>dados[i].FA;
        }while(dados[i].IM < 0 || dados[i].IM > 1 || dados[i].FA < 0 || dados[i].FA > 1);
        
        dados[i].GA = (dados[i].IM + dados[i].FA) / 2;
        
        i++;
        cin>>dados[i].id;
    }
    
    for(int j = 0; j < i; j++){
        if(dados[j].GA > maior){
            maior = dados[j].GA;
            maisApto = dados[j].id;
        }
    }
    
    cout<<"Stormtrooper escolhido: "<<maisApto<<endl;
    cout<<fixed<<setprecision(2)<<"GA: "<<maior<<endl;
    
    return 0;
}