//Padawan
/*
Um Padawan se referia a um adolescente sensível à Força que treinava na Ordem Jedi para 
se tornar um Cavaleiro Jedi.Depois de completar "os testes" para se tornar Jedi, um Padawan 
seria promovido para a patente de Cavaleiro. 
Cada teste vale uma certa quantidade de pontos, e eles sempre competiam entre si para ver quem 
tinha mais pontos acumulados.
Para monitorar os Padawans, o mestre Yoda pediu que você fizesse um programa que armazenasse o 
nome de cada Padawan e o seu número de pontos, e mostrasse o Padawan com o maior número de pontos.
Ainda, o mestre solicitou que você mostrasse a média de pontos de todos os Padawans pra ele poder comparar.

Entrada:
A entrada consiste de várias linhas:

- A primeira tem um único inteiro N (0<N<=1000), que corresponde ao número de Padawans a cadastrar.

- Nas próximas linhas tem-se o nome do Padawan e o número de pontos deste (uma informação em cada linha). 
O número de pontos é um dado inteiro.

Saída:
Nome do Padawan com o maior número de pontos, bem como a sua pontuação, e a pontuação média da turma 
(esta com duas casas decimais).

Exemplos de entrada:         Exemplos de Saída:     
2                            Padawan com mais pontos: Obi-Wan Kenobi
Obi-Wan Kenobi               Pontos: 1000
1000                         Media da turma: 878.00 pontos
Bairdon Jace
756
*/

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std; 

struct padawan{
    string nome;
    int pontos; 
};

int main(){
    
    padawan dados[100];
    int n, i, maior_pontos = -1; 
    string maior_nome;
    double soma = 0, media_turma = 0;
    
    do{
        cin>>n;
    }while(n < 0 || n > 1000);
    
    cin.ignore();
    
    for(int i = 0; i < n; i++){
        getline(cin, dados[i].nome);
        cin>>dados[i].pontos;
        cin.ignore();
        
        //media da turma:
        soma += dados[i].pontos;
    }
    
    media_turma = soma / n;
    
    for(i = 0; i < n; i++){
        if(dados[i].pontos > maior_pontos){
            maior_pontos = dados[i].pontos;
            maior_nome = dados[i].nome; 
        }
    }
    
    cout<<"Padawan com mais pontos: "<<maior_nome<<endl;
    cout<<"Pontos: "<<maior_pontos<<endl;
    cout<<fixed<<setprecision(2)<<"Media da turma: "<<media_turma<<" pontos"<<endl;
    
    
    return 0;
}