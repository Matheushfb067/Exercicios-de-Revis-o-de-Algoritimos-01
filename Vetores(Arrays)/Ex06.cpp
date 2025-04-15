//Joãozinho na aula de matemática
/*
Joãozinho estava na escola e fala para o amigo:
-Aê,descobri como colar na prova oral de tabuada: você só precisa escrever a tabuada 
na gola da sua camisa e eu leio.
No dia da prova a professora fala:
-Joãozinho fale a tabuada do cinco.
-Uma vez o cinco,cinco; duas vezes o cinco, dez; três vezes o cinco,quinze; 100 por cento algodão.

Faça um programa que leia um inteiro N e mostre a sua tabuada.

Entrada:
-Um número inteiro N, N<1000.
Saída:
-A tabuada de N

Exemplos de Entrada:    Exemplos de Saída: 
140                     140 x 0 = 0
                        140 x 1 = 140
                        140 x 2 = 280
                        140 x 3 = 420
                        140 x 4 = 560
                        140 x 5 = 700
                        140 x 6 = 840
                        140 x 7 = 980
                        140 x 8 = 1020
                        140 x 9 = 1260
                        140 x 10 = 1400
*/

#include <iostream>
using namespace std;

int main(){
    
    int n;
    int tabuada[11];
    
    do{
        cin>>n;
    }while(n < 0 || n > 1000);
    
    for(int i = 0; i < 11; i++){
        tabuada[i] = n * i;
    }
    
    for(int i = 0; i < 11; i++){
        cout<<n<<" x "<<i<<" = "<<tabuada[i]<<endl;
    }
    
    return 0;
}