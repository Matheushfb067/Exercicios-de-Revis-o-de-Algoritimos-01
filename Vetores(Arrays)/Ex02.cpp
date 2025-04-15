//Whinderson Nunes
/*
Whindersson Nunes é um fenômeno no Youtube: cada vídeo dele tem milhões de visualizações, 
e o canal do jovem piauiense tem quase 30 milhões de inscritos.
Ele ganha dinheiro pelo número de visualizações, e decidiu pedir pra você fazer um programa 
que mostrasse quantos vídeos têm 10 milhões de visualizações ou mais, e quantos têm menos de 
10 milhões de visualizações.
Então, você deve fazer um programa que leia o número de views de cada vídeo, armazene estes dados 
em um vetor, e forneça os dados listados acima.

Entrada:
-A primeira linha da entrada consiste de um único número inteiro, que corresponde ao número de 
vídeos a serem analisados (0<N<1000).
-Na segunda linha, tem-se N números inteiros, que indicam o número de visualizações de cada vídeo.

Saída:
-A saída deve mostrar quantos vídeos têm mais de 10 milhões de visualizações e quantos têm menos 
de 10 milhões de visualizações.

Exemplos de Entrada:          Exemplos de Saída:
3                             2 video(s) com mais de 10M views
10101231 7453852 22535934     1 video(s) com menos de 10M views
*/

#include <iostream>
using namespace std;

int main(){
    
    int vet[100];//onde são armazenadas as visualizações
    int num_videos, ma = 0, me = 0;//maior que 10M, menor que 10M. 
    
    do{
        cin>>num_videos;
    }while(num_videos < 0 || num_videos > 100);
    
    for(int i = 0; i < num_videos; i++){
        cin>>vet[i];
    }
    
    for(int i = 0; i < num_videos; i++){
        if(vet[i] < 10000000)
            me++;
        if(vet[i] > 10000000)
            ma++;
    }
    
    cout<<ma<<" video(s) com mais de 10M views"<<endl;
    cout<<me<<" video(s) com menos de 10M views"<<endl;
    
    
    return 0; 
}