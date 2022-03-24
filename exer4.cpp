/*4 - Elabore um programa que possibilite a realiza��o dos seguintes c�lculos:
1 � Potencia��o (entrada dois valores inteiros e positivos)
2 � Raiz quadrada (entrada um valor inteiro e positivo)
3 - Arredondar o valor seguindo o crit�rio da primeira casa decimal e mostrar na tela
(entrada um valor float)
4 � Verificar se um valor � primo ou n�o (entrada um valor inteiro positivo)
5 � Verificar se um valor � um n�mero perfeito ou n�o (entrada um valor inteiro positivo).
O sistema dever� apresentar um menu com as op��es e conforme a op��o desejada ser�
solicitado os dados de entrada.*/
#include <iostream>
#include <random>
#include <iomanip>
#include <math.h>
using namespace std;
int  mostraMenu();
int potencia ( int b, int p);
void ehPerfeito(int n);




int main()
{
    setlocale(LC_ALL, "portuguese");
    int opcao,b,p,resPoten,Raiz,num,aux,primo, div=0,perfeito,perf;
    float numFloat;
    opcao = mostraMenu();

    switch (opcao)
    {
    case 1:
        cout<<"Informe a base: ";
        cin>>b;

        cout<<"Informe a pot�ncia: ";
        cin>>p;

        resPoten=potencia (b,p);
        cout<< "Valor da pot�ncia: " <<resPoten<<endl;

        break;
    case 2:
        cout << "Informe um n�mero: ";
        cin >> num;
        Raiz= sqrt(num);
        cout << "A raiz quadrada de " << num
             << "� : " << Raiz << endl;

        break;
    case 3:
        cout << "Informe um n�mero real: ";
        cin >> numFloat;
        cout << round(numFloat);
        //round(numFloat)  usa o crit�rio da primeira casa decimal
        break;
    case 4:
        cout<< "Informe um n�mero: ";
        cin>> primo;

        for(aux=2 ; aux<=primo/2 ; aux++)
            if(primo%aux==0)
                div++;

        if(div==0)
            cout<<"� primo"<<endl;
        else
            cout<<"N�o � primo"<<endl;

        break;
    case 5:
        cout<< "Informe um n�mero: ";
        cin>> perf;
        ehPerfeito(perf);

        break;

    default:
        break;
    }



}

int mostraMenu()
{
    int leitura;
    cout << "1-Potencia��o:\n";
    cout << "2-Raiz quadrada:\n";
    cout << "3-Arredondar o valor:\n";
    cout << "4-Verificar se � primo ou n�o:\n";
    cout << "5-Verificar se o n�mero � perfeito ou n�o:\n";
    cin >> leitura;

    return leitura;
}
int potencia ( int b, int p)
{
    int resultado;
    resultado = 1;

    for(int j=1; j<=p; j++)
    {
        resultado=resultado*b;
    }
    return resultado;


}

/// ao retorno da fun��o pode ser diferente do que � passado por parametro - coisas distintas o tipo de cada um deles (func e parametro)
void ehPerfeito(int n)
{
    int i, soma = 0;


    for(i = 1; i <= n/2; i++)
    {
        if(n % i == 0)
            soma += i;
    }
    if(soma == n)
       {
           cout <<"Perfeito";
       }

    else
    {

         cout <<" N�o � Perfeito";
    }


}


