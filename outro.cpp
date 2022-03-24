/*1 – Escreva um programa que manipule um vetor A[10] de números float, os valores para
preencher o vetor devem ser gerados dinamicamente, mostre o vetor gerado na tela, ordenar o
vetor em ordem crescente e apresentar novamente o vetor na tela, a seguir mostre o vetor com
valores arredondados para cima, para baixo e seguindo o critério da primeira casa decimal.*/
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <math.h>

using namespace std;
#define TAM 10

int main()
{
    setlocale(LC_ALL, "portuguese");

    srand(time(NULL));
    bool trocou;
    float vetorF [TAM],aux;

    for (int n = 0; n <TAM; n++)
    {
        vetorF[n]=((rand()% 100) *1.12);

    }
    for(int i=0; i<TAM; i++)
    {

        cout << vetorF[i] << "|";
    }



    cout << endl;
    cout << endl;
    // Ordenação
    do
    {
        trocou = false;

        for(int i=0; i<vetorF-1; i++)
        {
            if(vetorF[i] > vetorF[i+1])
            {
                aux = vetorF[i];
                vetorF[i] = vetorF[i+1];
                vetorF[i+1] = aux;
                trocou = true;
            }

        }
    }
    while(trocou == true);


    // sort (vetorF,vetorF+TAM);

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

    //return EXIT_SUCCESS;




}
