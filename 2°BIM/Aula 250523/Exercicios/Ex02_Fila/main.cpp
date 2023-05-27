#include <iostream>
#include <locale>
#include <cstdlib>
#include <string>
#include <queue>

using namespace std;

typedef struct Conta
{
    string cliente;
    double saldo;
};

int main()
{
    setlocale(LC_ALL,"portuguese");

    queue <Conta> filaEspera;

    Conta novaConta;

    string nome;
    double saldoIni;
    int opc;
    int escolha;

    do
    {
        cout << "Escolha uma op��o: " << endl;
        cout << "(1) - Abrir nova conta" << endl;
        cout << "(2) - Atender Proximo" << endl;
        cout << "(3) - Encerrar programa" << endl;
        cin >> opc;
        system("cls");

        switch(opc)
        {
        case 1:
            cout << "Digite o nome do cliente: ";
            cin >> nome;

            cout << "Digite o saldo inicial: R$";
            cin >> saldoIni;

            novaConta.cliente = nome;
            novaConta.saldo = saldoIni;

            filaEspera.push(novaConta);
            system("cls");
            break;

        case 2:

            if(filaEspera.empty())
            {
                cout << "N�o h� clientes para atender!" << endl;
                break;
            }
            else
            {
                Conta usuario = filaEspera.front();

                cout << "Cliente: " << usuario.cliente << endl;
                cout << "Saldo: R$" << usuario.saldo << endl;
                cout << endl;

                do
                {
                    cout << "Escolha uma opera��o:" << endl;
                    cout << "(1) - Dep�sito" << endl;
                    cout << "(2) - Saque" << endl;
                    cout << "(3) - Consultar saldo" << endl;
                    cout << "(4) - Sair" << endl;
                    cin >> escolha;
                    system("cls");

                    switch(escolha)
                    {
                    case 1:
                        double soma;
                        cout << "Digite o valor do dep�sito: R$" << endl;
                        cin >> soma;

                        saldoIni = saldoIni+soma;
                        usuario.saldo = saldoIni;
                        system("cls");
                        break;

                    case 2:
                        double saque;
                        cout << "Digite o valor do saque: R$" << endl;
                        cin >> saque;

                        if(saldoIni < saque)
                        {
                            cout << "Saldo Indispon�vel" << endl;
                        }
                        else
                        {
                            saldoIni = saldoIni-saque;
                            usuario.saldo = saldoIni;
                        }

                        system("cls");
                        break;

                    case 3:
                        cout << "Saldo: R$" << usuario.saldo << endl;
                        cout << endl;
                        break;

                    case 4:
                        cout << "Atendimento Finalizado!" << endl;
                        break;
                    default:
                        cout << "Op��o Inv�lida!" << endl;
                        break;
                    }

                }
                while(escolha != 4);
                filaEspera.pop();
                system("cls");
                break;
            }

        case 3:
            cout << "Obrigado por usar nosso sistema!" << endl;
            break;

        default:
            cout << "Op��o Inv�lida!" << endl;
            break;
        }
    }
    while(opc != 3);

}
