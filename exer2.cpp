#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <iomanip>


using namespace std;



int main()
{
    setlocale(LC_ALL, "portuguese");

    int codigo,qnt,opcao=0;
    string vetorNome[8];
    int vetorQtd[8];
    float vetorValor[9];
// laço par inicializar os vetores

    for (int i=0; i<8; i++)
    {
        vetorQtd[i]=0;
        vetorValor[i]=0.0;
    }

    vetorNome[0] = "Hot Dog ";
    vetorNome[1] = "Bauru Simples ";
    vetorNome[2] = "Bauru com ovo ";
    vetorNome[3] = "Hambúrger ";
    vetorNome[4] = "Cheeseburguer ";
    vetorNome[5] = "Torrada ";
    vetorNome[6] = " Refrigerante";
    vetorNome[7] = " Suco Natural";
    //descrição estática

    do
    {
        cout << " >> Lancheria << " << endl;
        cout << " << Cardápio  >>" << endl;
        cout << "Descrição" <<"\t "<< "Código" << "\t" << "Valor " << endl;
        cout << "Hot Dog " <<"\t "<< "10" << "\t" << "RS12,00 " << endl;
        cout << "Bauru Simples" <<"\t "<< "11" << "\t" << "RS16,50 " << endl;
        cout << "Bauru com ovo" <<"\t "<< "12" << "\t" << "RS18,00 " << endl;
        cout << "Hambúrger" <<"\t "<< "13" << "\t" << "RS22,00 " << endl;
        cout << "Cheeseburguer" <<"\t "<< "14" << "\t" << "RS20,00 " << endl;
        cout << "Torrada " <<"\t "<< "15" << "\t" << "RS10,00 " << endl;
        cout << "Refrigerante" <<"\t "<< "1" << "\t" << "RS8,00 " << endl;
        cout << "Suco Natural" <<"\t "<< "2" << "\t" << "RS10,50 " << endl;

        cout << "\nEscolha o pedido pelo código :";
        cin >> codigo;
// verifica se está no cardápio
        while((codigo < 10 && (codigo !=1 && codigo!=2) ) || (codigo >15 ) )
        {
            cout << "Informe corretamente o código desejado!" << endl;
            cin >> codigo;


        }

        cout << "\nInforme a quantidade " << endl;
        cin >> qnt;


        switch (codigo)
        {
        case 1:
            vetorQtd[6]+=qnt;
            vetorValor[6]+=8.0*qnt;
            vetorValor[8]+=8.0*qnt;
            break;
        case 2:
            vetorQtd[7]+=qnt;
            vetorValor[7]+=10.50*qnt;
            vetorValor[8]+=10.50*qnt;
            break;
        case 10:
            vetorQtd[0]+=qnt;
            vetorValor[0]+=12.0*qnt;
            vetorValor[8]+=12.0*qnt;
            break;
        case 11:
            vetorQtd[1]+=qnt;
            vetorValor[1]+=16.50*qnt;
            vetorValor[8]+=16.50*qnt;
            break;
        case 12:
            vetorQtd[2]+=qnt;
            vetorValor[2]+=18.0*qnt;
            vetorValor[8]+=18.0*qnt;
            break;
        case 13:
            vetorQtd[3]+=qnt;
            vetorValor[3]+=22.0*qnt;
            vetorValor[8]+=22.0*qnt;
            break;
        case 14:
            vetorQtd[4]+=qnt;
            vetorValor[4]+=20.0*qnt;
            vetorValor[8]+=20.0*qnt;
            break;
        case 15:
            vetorQtd[5]+=qnt;
            vetorValor[5]+=10.0*qnt;
            vetorValor[8]+=10.0*qnt;
            break;

        default:
            break;
        }
        cout << "Deseja incluir mais algum item ? 0- n 1-s";
        cin >> opcao;


    }
    while(opcao!=0);

    cout << "Descrição" <<"\t "<< "QTD" << "\t" << "Valor do Item R$" << endl;
    for(int i =0; i<8; i++)
    {

        if(vetorQtd[i] !=0)
        {

            cout << vetorNome[i]<<"\t" << vetorQtd[i]<< "\t" << vetorValor[i] <<endl;

        }


    }

    cout << "Total:R$ " << vetorValor[8];


}



