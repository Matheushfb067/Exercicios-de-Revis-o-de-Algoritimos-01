//Positivo e Negativo
/*
Faça um programa que leia um número inteiro e verifique se o mesmo é positivo ou negativo.
Esta verificação deve ser feita por meio de uma função sinal(), que retorna 1 se o número 
for positivo, -1 se for negativo, 0 se o número for igual a zero.

Entrada:
Um número inteiro.

Saída:
O programa deve escrever a mensagem "Positivo", "Negativo" ou "Zero", dependendo do número digitado.

Exeplos de Entrada:     Exemplos de Saída: 
2                       Positivo
-5                      Negativo
0	                    Zero
*/

#include <iostream>
using namespace std;

int sinal(int num){
    if(num > 0)
        return 1;
    else if(num < 0) 
        return -1;
    else
        return 0;
}

int main(){
    
    int num, pn;//pn = positivo e negativo
    
    cin>>num;
    
    pn = sinal(num);
    
    if(num > 0)
        cout<<"Positivo"<<endl;
    if(num < 0)
        cout<<"Negativo"<<endl;
    if(num == 0)
        cout<<"Zero"<<endl;
        
    return 0; 
}