//Joãozinho 2
/*
O professor de matemática pergunta para o Joãozinho:
O que devo fazer para repartir 11 batatas por 7 pessoas?
Ele respondeu: Purê de batata.

Elabore um programa que dados dois vetores X e Y, inteiros de N posições cada,
efetue as respectivas operações indicadas por um outro vetor Op de N posições
de caracteres também fornecido pelo usuário, contendo as quatro operações aritméticas 
em qualquer combinação, armazenando os resultados num quarto vetor Z.

Entradas:
-A primeira linha contém um único inteiro N (N<100), que contém o número de casos.
-A segunda linha contém N números inteiros, que devem ser guardados no vetor X.
-A terceira linha contém N números inteiros, que devem ser guardados no vetor Y.
-A quarta linha contém N caracteres, que podem ser +, -, * ou /, e que devem ser guardados no vetor Op.

Saídas:
-Para cada caso de teste, o programa deve mostrar a operação realizada, e o resultado. 
Se o resultado for real, este deve ser apresentado com 2 casas decimais.

Exemplos de Entrada:     Exemplos de Saída: 
4                        2 * 4 = 8
2 3 4 5                  3 - 4 = -1
4 4 7 2                  4 + 7 = 11
* - + /                  5 / 2 = 2.50
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    double x[100], y[100], n;
    char op[100];
    double z[100];
    
    do{
        cin>>n;
    }while(n < 0 || n > 100);
    
    for(int i = 0; i < n; i++){
        cin>>x[i]; 
    }
    
    for(int i = 0; i < n; i++)
        cin>>y[i];
        
    for(int i = 0; i < n; i++)
        cin>>op[i];
    
    
    for(int i = 0; i < n; i++){
        if(op[i] == '*')
            z[i] = x[i] * y[i];
            
        else if(op[i] == '-')
            z[i] = x[i] - y[i];
            
        else if(op[i] == '+')
            z[i] = x[i] + y[i];
            
        else if(op[i] == '/')
            if(x[i] != 0 || y[i] != 0)
                z[i] = x[i] / y[i];
            else
                z[i] = 0;
    }
    
    for(int i = 0; i < n; i++){
        cout << x[i] << " " << op[i] << " " << y[i] << " = ";
        
        if(op[i] == '/')
            cout<<fixed<<setprecision(2)<<z[i]<<endl;
        else
            cout<<z[i]<<endl;
    }
    
    return 0;
}