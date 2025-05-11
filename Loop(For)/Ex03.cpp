//Numero Primo
/*
Faça um programa que leia um número inteiro N, e verifique se o mesmo é primo.

Entrada:
Um inteiro N (N <=1000)

Saída:
Se N for primo, o programa deve apresentar a mensagem "primo", senão, o programa 
deve apresentar a mensagem "nao e primo".

Exemplo de Entrada:       Exemplo de Saída: 
1                         primo
4                         nao e primo
13                        primo
243	                      nao e primo
*/

#include <iostream>
using namespace std;

int main(){
    
    int n, i, cont = 0; 
    
    cin>>n;
    
    if(n < 2){
        cout<<"Não é primo"<<endl;
    }
    else{
        for(i = 1; i <= n; i++){
            if(n % i == 0)
                cont++;
        }
        
        if(cont == 2)
            cout<<"primo"<<endl;
        else
            cout<<"nao e primo"<<endl;
    }
    
    return 0;
}


