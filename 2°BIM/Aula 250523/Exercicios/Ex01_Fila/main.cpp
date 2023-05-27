#include <iostream>
#include <queue>
#include <cstdlib>
#include <locale>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");

    string nome;
    queue <string> cliente;
    queue <string> aux;

    int opc;
    int escolha;

    do
    {
        cout << "Escolha uma opção: " << endl;
        cout << "(1) - Adicionar cliente" << endl;
        cout << "(2) - Atender cliente" << endl;
        cout << "(3) - Exibir fila de espera" << endl;
        cout << "(4) - Encerrar programa" << endl;
        cin >> opc;
        system("cls");

        switch(opc)
        {
        case 1:
            do
            {
                cout << "Digite o nome do cliente: ";
                cin >> nome;

                cliente.push(nome);
                aux.push(nome);
                cout << endl;
                cout << "Cliente adicionado a fila de espera!" << endl;
                cout << endl;

                cout << "Deseja continuar inserindo?" << endl;
                cout << "(1) - Sim || (2) - Nao" << endl;
                cin >> escolha;
                system("cls");
            }
            while(escolha != 2);
            break;

        case 2:
            if(cliente.empty())
            {
                cout << "Não há cliente para ser atendido!" << endl;
            }
            else
            {
                cout << "Cliente: " << cliente.front() << endl;
                cliente.pop();
            }
            break;

        case 3:
            if(cliente.empty())
            {
                cout << "Não há cliente na fila!" << endl;
            }
            else
            {
                aux = cliente;
            }

            while(!aux.empty())
            {
                cout << "Cliente: " << aux.front() << endl;
                aux.pop();
            }
            cout << endl;
            break;
        case 4:
            cout << "Obrigado por usar nosso sistema!" << endl;
            break;
        default:
            cout << "Opção inválida!" << endl;
            break;
        }



    }
    while(opc != 4);
}
