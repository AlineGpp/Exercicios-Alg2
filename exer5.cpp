/*5 - A padaria Europa � uma franquia que possui v�rias lojas na cidade de Porto Alegre, a rede
toda vende uma certa quantidade de p�es franceses e uma quantidade de broas a cada dia.
Cada p�ozinho custa R$ 0,41 e a broa custa R$ 3,50. Ao final do dia, o dono da rede sabe
quanto arrecadou com a venda dos p�es e broas (juntos), devido a pandemia do COVID-19 ele
decidiu doar 5% do que arrecada com estes dois itens que comercializa para o hospital da
cidade. Com base nestes fatos, fa�a um programa para ler as quantidades de p�es e de broas
vendidos, e depois calcule quanto foi arrecadado e quanto ser� a doa��o para o hospital,
apresente os valores formatados com duas casas decimais.*/

#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    cout << "\4 Paddaria Europa \4" << endl;
    int leitura,quantidade,tipo, qnt;
    float Totaljuntos,doado=0,pao=0,broa=0;

    do
    {
        cout << "Informe o c�digo do item desejado:"<< endl;;
        cout << "Cod\tTipo\tValorUnidade:\n";
        cout << "1\tP�o\tR$0,41\n";
        cout << "2\tBroa\tR$3,50\n";
        cin >> tipo;
        cout << "Informe a quantidade:";
        cin >> qnt;

        if (tipo == 1)
        {
            pao = (qnt * 0.41);

        }
        else if  (tipo == 2)
        {
            broa = (qnt * 3.50);
        }
        cout << "Deseja fazer mais um pedido 0-n 1-s ? " ;
        cin >> leitura;

    }
    while (leitura!=0);
    cout << "P�o :" << pao << endl;
    cout << "Broa :" << broa << endl;
    Totaljuntos = pao + broa;

    cout << fixed <<  setprecision(2) << "O total dos dois itens: " << Totaljuntos << endl;

    doado = (0.05*Totaljuntos);

    cout << fixed <<  setprecision(2) <<"O valor a ser doado ser� de R$"<< doado;




}


