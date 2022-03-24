/*4 - Elabore um programa que possibilite a realização dos seguintes cálculos:
1 – Potenciação (entrada dois valores inteiros e positivos)
2 – Raiz quadrada (entrada um valor inteiro e positivo)
3 - Arredondar o valor seguindo o critério da primeira casa decimal e mostrar na tela
(entrada um valor float)
4 – Verificar se um valor é primo ou não (entrada um valor inteiro positivo)
5 – Verificar se um valor é um número perfeito ou não (entrada um valor inteiro positivo).
O sistema deverá apresentar um menu com as opções e conforme a opção desejada será
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

        cout<<"Informe a potência: ";
        cin>>p;

        resPoten=potencia (b,p);
        cout<< "Valor da potência: " <<resPoten<<endl;

        break;
    case 2:
        cout << "Informe um número: ";
        cin >> num;
        Raiz= sqrt(num);
        cout << "A raiz quadrada de " << num
             << "é : " << Raiz << endl;

        break;
    case 3:
        cout << "Informe um número real: ";
        cin >> numFloat;
        cout << round(numFloat);
        //round(numFloat)  usa o critério da primeira casa decimal
        break;
    case 4:
        cout<< "Informe um número: ";
        cin>> primo;

        for(aux=2 ; aux<=primo/2 ; aux++)
            if(primo%aux==0)
                div++;

        if(div==0)
            cout<<"É primo"<<endl;
        else
            cout<<"Não é primo"<<endl;

        break;
    case 5:
        cout<< "Informe um número: ";
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
    cout << "1-Potenciação:\n";
    cout << "2-Raiz quadrada:\n";
    cout << "3-Arredondar o valor:\n";
    cout << "4-Verificar se é primo ou não:\n";
    cout << "5-Verificar se o número é perfeito ou não:\n";
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

/// ao retorno da função pode ser diferente do que é passado por parametro - coisas distintas o tipo de cada um deles (func e parametro)
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

         cout <<" Não é Perfeito";
    }


}


