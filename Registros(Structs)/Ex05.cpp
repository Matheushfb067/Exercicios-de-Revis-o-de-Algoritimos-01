//Jedi
/*
Um Jedi era um indivíduo sensível à Força, geralmente membro da Ordem Jedi, que estudava, 
servia-a, e usava as energias místicas da Força e seu lado luminoso.
Mestre Yoda espalhou os cavaleiros nas bases para poder defendê-las, e quer ter um controle 
de quem está aonde. Para isso, a sua missão é cadastrar o nome de cada cavaleiro e a base aonde 
este está alocado, para que ele possa traçar as suas estratégias de combate ao Império

Entrada:
A entrada consiste de várias linhas:

- A primeira tem um único inteiro N (0<N<=1000), que corresponde ao número de cavaleiros a cadastrar.

- Nas próximas linhas tem-se o nome do cavaleiro Jedi e o número da base em que ele se encontra.

- A última linha corresponde à busca: o mestre digita o nome do cavaleiro, e o programa deve mostrar 
a base onde ele está no momento.

Saída:
Número da base onde o cavaleiro se encontra, ou a mensagem "Este cavaleiro nao esta cadastrado", 
se o mesmo não for encontrado.

Exemplos de Entrada:          Exemplos de Saída: 
2                             Este cavaleiro esta na base 2
Mace Windu
2
Anakin Skywalker
7
Mace Windu
 	 
2                            Este cavaleiro nao esta cadastrado
Mace Windu
2
Anakin Skywalker
7
Kanan Jarrus
*/

#include <iostream>
#include <cstring>
using namespace std; 

struct bases_jedi{
    string nome; 
    int base;
};

int main(){

    bases_jedi jedi[100];
    int n;
    string nome_busca;
    
    do{
        cin>>n;
    }while(n < 0 || n > 1000);
    
    cin.ignore();
    
    for(int i = 0; i < n; i++){
        getline(cin, jedi[i].nome);
        cin>>jedi[i].base;
        
        cin.ignore();
    }
    
    getline(cin, nome_busca);
    
    for(int i = 0; i < n; i++){
        if(jedi[i].nome == nome_busca){
        cout<<"Este cavaleiro esta na base "<<jedi[i].base<<endl;
        return 0;
        }
        else
            cout<<"Este cavaleiro nao esta cadastrado"<<endl;
    }
    
    return 0; 
}