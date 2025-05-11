//Noob
/*
Faça um programa que leia o número de matrícula e as notas de duas provas de um 
aluno (as notas são reais), e armazene estas informações em uma struct adequada.
Depois o programa deve calcular a média do aluno (uma média ponderada, onde a primeira 
prova tem peso 2 e a segunda, peso 3), e guardar este resultado na struct também.
Finalmente, o programa deve mostrar os dados na tela.

Entrada:
Número de matrícula, nota da primeira prova, nota da segunda prova.

Saída:
Os valores digitados e a média final do aluno. As notas e a média devem 
ser mostradas com 2 casas decimais.

Exemplos de Entrada:         Exemplos de Saída: 
4223 70.0 71.0               Digite o seu numero de matricula:
                             Digite a nota da primeira prova:
                             Digite a nota da segunda prova:
                             Matricula do aluno: 4223
                             Nota da primeira prova: 70.00
                             Nota da segunda prova: 71.00
                             Media: 70.60
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct registro{
    int num_matricula;
    double n1, n2; //nota 1 e nota 2.
    double md;//media ponderada com peso 2 e 3 na primeira e segunda prova
};

int main(){
    
    registro dados;//variavel criada com o tipo da struct 
    
    cout<<"Digite o seu numero de matricula: ";
    cin>>dados.num_matricula;
    cout<<"Digite a nota da primeira prova: ";
    cin>>dados.n1;
    cout<<"Digite a nota da segunda prova: ";
    cin>>dados.n2;
    
    // Calculando a média ponderada
    dados.md = ((dados.n1 * 2) + (dados.n2 * 3)) / 5;
    
    cout<<"Matricula do aluno: "<<dados.num_matricula<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Nota da primeira prova: "<<dados.n1<<endl;
    cout<<"Nota da segunda prova: "<<dados.n2<<endl;
    cout<<"Media: "<<dados.md<<endl;
    
    return 0; 
}