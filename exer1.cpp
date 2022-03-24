/*1 – Escreva um programa que manipule um vetor A[10] de números float, os valores para
preencher o vetor devem ser gerados dinamicamente, mostre o vetor gerado na tela, ordenar o
vetor em ordem crescente e apresentar novamente o vetor na tela, a seguir mostre o vetor com
valores arredondados para cima, para baixo e seguindo o critério da primeira casa decimal.*/
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <algorithm>
#include <random>
#include <iomanip>
#include <cmath>

using namespace std;
#define TAM 10

int main()
{
    setlocale(LC_ALL, "portuguese");
    float vetorF[TAM];
    random_device rd;
    default_random_engine eng(rd());
    uniform_real_distribution<float> distr(0, 100);
    //float h;

    // Gerando o vetor
    for (int n = 0; n <TAM; ++n)
    {
        vetorF[n]= distr(eng);
        cout << fixed <<  setprecision(1)

             << vetorF[n]<< "|";

    }
    cout << endl;
    cout << endl;
     // Ordenação
    sort (vetorF,vetorF+TAM);

    for(int i=0; i<TAM; i++)
    {

        cout << vetorF[i] << "|";
    }

    cout << endl;
    cout << endl;
     // Arredondar para cima
    for(int i=0; i<TAM; i++)
    {

        cout << ceil(vetorF[i]) <<"|" ;
    }

    cout << endl;
    cout << endl;

     //Arredondar para baixo
    for(int i=0; i<TAM; i++)
    {

        cout << floor(vetorF[i]) << "|";
    }

    cout << endl;
    cout << endl;

    return EXIT_SUCCESS;




}
