/*3 � Escreva um programa que receba a altura (h), o sexo de uma pessoa (M � Masculino, F �
Feminino) e o seu peso atual, ap�s o sistema dever� calcular o peso ideal, utilizando as
seguintes f�rmulas:
- Homens: (72.7 * h) - 58
- Mulheres: (62.1 * h) - 44.7
Considera-se que a pessoa est� no peso ideal se o seu peso atual encontra-se em uma margem
de -3kg do peso ideal ou +3kg do peso ideal.
Ao Final o sistema dever� exibir se o usu�rio est� abaixo, dentro do peso ideal, ou acima do
peso ideal.*/
#include <iostream>
#include <random>
#include <iomanip>
using namespace std;


int main()
{
    setlocale(LC_ALL, "portuguese");
    char sexo;
    float h,peso,homens,mulheres;

    cout << "Informe a o seu sexo: F - feminino M - masculino\n";
    cin >> sexo;
    sexo=toupper(sexo);

    cout << "Informe a sua altura:";
    cin >> h;

    cout << "Informe a seu peso:";
    cin >> peso;

    if (sexo == 'M')
    {
        homens = ((72.7 * h) - 58.0);
        cout << "\nHomens: " << homens << endl;

        if ((peso <= homens +3 ) && (peso >= homens -3 ))
        {
            cout << "Voc� 3kg na margem do peso ideal!";


        }

        else if((peso > homens + 3))
        {
            cout << "Voc� est� a acima do   peso ideal!";
        }

        else
        {

            cout << "Voc� est� a abaixo do peso ideal!";
        }


    }

    else if (sexo == 'F')
    {

        mulheres = ((62.1 * h) - 44.7);
        cout << "\nMulheres: " << mulheres << endl;

        /// verifica��o peso mulheres

        if ((peso <= mulheres +3 ) && (peso >= mulheres -3 ))
        {
            cout << "Voc� 3kg na margem do peso ideal!";


        }

        else if((peso > mulheres + 3))
        {
            cout << "Voc� est� a acima do   peso ideal!";
        }

        else
        {

            cout << "Voc� est� a abaixo do peso ideal!";
        }

    }








}



