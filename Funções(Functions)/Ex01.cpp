//Peso Ideal
/*
Faça uma função que receba a altura coração em metros, e o sexo de uma pessoa 
e retorne o seu peso ideal.
Para homens, o peso ideal é dado por: peso ideal = 72.7 x h - 58 e,

para mulheres, peso ideal = 62.1 x h - 44.7

Entrada:
Altura e sexo da pessoa

Saída:
Peso ideal para a altura e sexo.

Exemplos de Entrada:        Exemplos de Saída: 
1.70 M                      Peso ideal = 65.59 kg
1.70 F                      Peso ideal = 60.87 kg
*/

#include <iostream>
#include <iomanip>
using namespace std; 

float pesoIdeal(float altura, char sexo){
    float pi; //peso ideal por genero.
    
    if(sexo == 'M')//M = masculino
        pi = 72.7 * altura - 58;
    if(sexo == 'F')//F = feminino
        pi = 62.1 * altura - 44.7;
        
    return pi;
}

int main(){
    
    float altura, pi; 
    char sexo;
    
    cin>>altura;
    
    do{
        cin>>sexo; 
    }while(sexo != 'M' && sexo != 'F');
    
    pi = pesoIdeal(altura, sexo);
    
    cout<<fixed<<setprecision(2);
    cout<<"Peso ideal = "<<pi<<" kg"<<endl;
    
    return 0; 
}