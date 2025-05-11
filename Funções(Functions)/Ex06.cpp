//O Professor Assustador 2
/*
Agora, o professor Assustador quer saber quantos alunos têm nota acima da 
média da turma e quantos têm nota abaixo da média da turma.

Assim, incremente o seu programa, desenvolvendo mais duas funções, uma 
para verificar quantos alunos têm nota abaixo da média e outra para verificar 
quantos alunos têm nota acima da média.

Entrada:
A entrada consiste de várias linhas:
- a primeira linha contém um único inteiro N (0 < N <= 100), que corresponde 
ao número de alunos do professor Assustador.
- a segunda linha irá conter as notas de cada um dos N alunos, separadas 
por um espaço em branco. Cada nota tem um valor inteiro, de 0 a 100. 

Saída:
O programa deve mostrar a média da turma, com 2 casas decimais, e os números 
de alunos com notas abaixo e acima da média. Se um aluno tiver nota igual à média, ele deve ser contado no grupo dos alunos com nota acima da média.

Exemplos de Entrada:        Exemplos de Saída:
4                           Media da turma = 57.50
20 45 97 68                 Alunos com nota abaixo da media: 2
                            Alunos com nota acima da media: 2 
*/

#include <iostream>
#include <iomanip>
using namespace std;

double media(double vet[100], int num){
    double soma = 0 , md;
    
    for(int i = 0; i < num; i++){
        soma += vet[i];
    }
    
    md = soma / num;
    
    return md;
}

double maiorMd(double vet[100], int num){//Maior que a media
    double soma = 0;
    int ma = 0; //maior
    
    for(int i = 0; i < num; i++){
        soma += vet[i];
    }
    
    for(int i = 0; i < num; i++){
        if(vet[i] > media(vet, num))
            ma++;   
    }
    
    return ma;
}

double menorMd(double vet[100], int num){//Menor que a media
    double soma = 0; 
    int me = 0;//menor
    
    for(int i = 0; i < num; i++){
        soma += vet[i];
    }
    
    for(int i = 0; i < num; i++){
        if(vet[i] < media(vet, num))
            me++;
    }
    
    return me;
}

int main(){
    
    double md; 
    int num, ma, me; 
    double vet[100];
    
    do{
       cin>>num; 
    }while(num < 0 || num > 100);
    
    for(int i = 0; i < num; i++){
        cin>>vet[i];
    }
    
    md = media(vet, num);
    ma = maiorMd(vet, num);
    me = menorMd(vet, num);
    
    cout<<fixed<<setprecision(2);
    cout<<"Media da turma: "<<md<<endl;
    cout<<"Alunos com nota abaixo da media: "<<me<<endl;
    cout<<"Alunos com nota acima da media: "<<ma<<endl;
    
    return 0;
}