#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    float num[6];
    float soma = 0;
    int conta = 0;
    float media = 0;
    short opc;

    do
    {
        cout << "POSITIVOS E NEGATIVOS" << endl;
        cout << endl;

        for(int i = 0; i < 6; i++)
        {
            cout << "DIGITE UM NUMERO: ";
            cin >> num[i];

            if(num[i] > 0)
            {
                soma = soma + num[i];
                conta++;
            }
        }

        media = soma/conta;

        cout << conta << " valores positivos" << endl;
        cout << media;

        cout << endl;
        cout << "Deseja calcular novamente?" << endl;
        cout << "(1) - SIM" << endl;
        cout << "(2) - NÃO" << endl;
        cin >> opc;

    }while(opc != 2);

}
