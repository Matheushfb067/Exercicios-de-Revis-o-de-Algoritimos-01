//Escola Mundial
/*
A Profa. Helena do terceiro ano está muito atarefada porque o Kokimoto e o 
Paulo se meteram em encrencas de novo.
Para ajudá-la, você decidiu fazer um programa para ela monitorar o progresso 
(ou não) de seus alunos.
Faça então um programa que leia as notas deles e mostre a média da turma e o número 
de alunos com nota abaixo da média e o número de alunos com nota acima da média.

Entrada:
-A primeira linha consiste de um único inteiro N, que representa o número de alunos 
da Profa. Helena.
-A segunda linha contém N números reais, que correspondem às notas dos alunos.

Saída:
-A saída deve mostrar a média da turma, com duas casas depois da vírgula, o número de 
alunos com nota igual ou superior à média da turma, e o número de alunos com nota abaixo 
da média da turma.

Exemplos de Entrada:           Exemplos de Saída:
6                              Media da turma: 58.33
20 100 50 75 40 65             Alunos com nota acima da media: 3
                               Alunos com nota abaixo da media: 3
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    double vet[30];//vetor com as notas dos alunos
    double num, md, soma = 0;//numero de alunos, media
    int ma, me;//contadores das notas acima e abaixo da media 
    
    do{
        cin>>num;
    }while(num < 0 || num > 30);
    
    for(int i = 0; i < num; i++){
        cin>>vet[i];
        soma += vet[i];
    }
    
    md = soma / num; 
    
    ma = 0;
    me = 0;
    
    for(int i = 0; i < num; i++){
        if(vet[i] > 60)
            ma++;
        if(vet[i] < 60)
            me++;
    }
    
    cout<<fixed<<setprecision(2);
    cout<<"Media da turma: "<<md<<endl;
    cout<<"Alunos com nota acima da media: "<<ma<<endl;
    cout<<"Alunos com nota abaixo da media: "<<me<<endl;
    
    return 0; 
}