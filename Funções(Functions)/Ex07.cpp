// The World's Strongest Man
/*
The World's Strongest Man é uma competição para ver quem é o homem mais forte do mundo.
Dentre as provas que os competidores têm que passar incluem-se carregar pedras super
pesadas, puxaar caminhões ou ônibus, jogar objetos gigantes, etc. Cada prova tem uma
pontuação, e o competidor que fizer mais pontos é o vencedor.

Você foi contratado para desenvolver um sistema que receba os nomes e notas de cada competidor
e aponte o vencedor (aquele que fizer mais pontos).

Para isso, faça um programa que leia o nome e 4 notas de cada competidor, e armazene estes dados
em um vetor de structs. Depois, desenvolva uma função que receba este vetor e retorne a posição do
vetor em que está o vencedor da competição. Você pode considerar que não haverá empates.

Entrada:
A entrada consiste de várias linhas:
- a primeira linha contém um único inteiro N, que corresponde ao número de atletas inscritos
- para cada atleta haverá duas linhas: a primeira com o nome do atleta, e a segunda com as suas 4 notas (inteiras).

Saída:
O programa deve mostrar o nome do atleta vencedor, como no exemplo abaixo.
IMPORTANTE: garanta que a sua função retorne a posição do vencedor no vetor, e não o nome dele.

Exemplos de Entrada        Exemplos de Saída:
4                          Vencedor: Hafbor Julius Bjornsson
Eddie Hall
70 85 92 67
Brian Shaw
72 87 99 85
Zydrunas Savickas
77 85 45 94
Hafbor Julius Bjornsson
98 77 99 95
*/

#include <iostream>
#include <cstring>
using namespace std;

struct registro
{
    string nome;
    int notas[4];
};

int indiceVencedor(registro dados[], int n)
{
    int maior = -1;
    int indice = 0;

    for (int i = 0; i < n; i++)
    {
        int soma = 0;
        for (int j = 0; j < 4; j++)
        {
            soma += dados[i].notas[j];
        }

        if (soma > maior)
        {
            maior = soma;
            indice = i;
        }
    }

    return indice;
}

int main()
{

    registro dados[100];
    int n;

    do
    {
        cin >> n;
    } while (n < 0 || n > 100);

    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, dados[i].nome);

        for (int j = 0; j < 4; j++)
        {
            cin >> dados[i].notas[j];
        }

        cin.ignore();
    }

    int vencedor = indiceVencedor(dados, n);

    cout << "Vencedor: " << dados[vencedor].nome << endl;

    return 0;
}