//Pré-Noob
/*
Faça um programa que leia o número de matrícula e as notas (reais) de duas provas de um aluno, 
e armazene estas informações em uma struct adequada.
Depois o programa deve mostrar os dados armazenados na tela.

Entrada:
Número de matrícula, nota da primeira prova, nota da segunda prova.

Saída:
Os valores digitados, sendo que as notas devem ser mostradas com duas casas decimais.

Exemplos de Entrada:          Exemplos de Saída: 
4223 70.00 71.00              Digite o seu numero de matricula:
                              Digite a nota da primeira prova:
                              Digite a nota da segunda prova:
                              Matricula do aluno: 4223
                              Nota da primeira prova: 70.00
                              Nota da segunda prova: 71.00
*/

#include <iostream>
#include <iomanip>
using namespace std; 

struct registro{
    int num;//numero de matricula
    double n1, n2; //nota 1 e nota 2
};

int main(){
    
    registro dados; 
    
    cout<<"Digite o seu numero de matricula: ";
    cin>>dados.num;
    cout<<"Digite a nota da primeira prova: ";
    cin>>dados.n1;
    cout<<"Digite a nota da segunda prova: ";
    cin>>dados.n2;
    
    cout<<"Matricula do aluno: "<<dados.num<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Nota da primeira prova: "<<dados.n1<<endl;
    cout<<"Nota da segunda prova: "<<dados.n2<<endl;
    
    return 0; 
}