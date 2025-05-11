//Funções 1
/*
Seja o código abaixo:

#include<iostream>
using namespace std;
int main()
{
    int a,b,c,x,y;
    cin >> x >> y;
    // a = 2x^2 + 3x - 1;
    cout << a << endl;
    // b = x^3;
    cout << b << endl;
    // c = y^3;
    cout << c << endl;
    return 0;
}

Substitua as linhas comentadas por funções que façam os cálculos indicados, 
e chame estas funções dentro do seu programa.

Entrada:
2 números inteiros, x e y.

Saída:
Os valores calculados para a, b e c.

Exemplos de Entrada:      Exemplos de Saída:
2 3                       a = 13
                          b = 8
                          c = 27
*/

#include <iostream>
#include <cmath>
using namespace std; 

int func1(int a){
    a = 2 * pow(a, 2) + (3*a) - 1;
    
    return a;
}

int func2(int b){
    b = pow(b, 3);
    
    return b;
}

int func3(int c){
    c = pow(c, 3);
    
    return c;
}


int main(){
    
    int x, y, a, b, c;
    
    cin>>x>>y;
    
    a = func1(x);
    b = func2(x);
    c = func3(y);
    
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
    
    return 0;
}