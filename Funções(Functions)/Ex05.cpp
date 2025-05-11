//O Professor Assustador:
/*
O professor Assustador pediu para que você desenvolvesse um programa que 
lesse as notas de todos os alunos de sua sala, e retornasse a média da 
turma.

Para isso, faça um programa que leia as notas de cada aluno e as armazene 
em um vetor. Depois, desenvolva uma função que receba este vetor e retorne 
a média da turma.

Entrada:
A entrada consiste de várias linhas:
- a primeira linha contém um único inteiro N (0 < N <= 100), que corresponde 
ao número de alunos do professor Assustador.

- a segunda linha irá conter as notas de cada um dos N alunos, separadas 
por um espaço em branco. Cada nota tem um valor inteiro, de 0 a 100. 

Saída:
O programa deve mostrar a média da turma, com 2 casas decimais.

Exemplos de Entrada:          Exemplos de Saída:
4                             Media da turma = 57,50
20 45 97 68	
*/

#include <iostream>
#include <iomanip>
using namespace std;

double media(double vet[100], double num){
    double soma = 0 , md;
    
    for(int i = 0; i < num; i++){
        soma += vet[i];
    }
    
    md = soma / num;
    
    return md;
}


int main(){
    
    double num, md; 
    double vet[100];
    
    do{
       cin>>num; 
    }while(num < 0 || num > 100);
    
    for(int i = 0; i < num; i++){
        cin>>vet[i];
    }
    
    md = media(vet, num);
    
    cout<<fixed<<setprecision(2);
    cout<<"Media da turma: "<<md<<endl;
    
    return 0;
}