#include <iostream>
#include <stack>
#include <cstdlib>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");

    int opc = 0;
    int valor = 0;
    stack<int> num;

    do
    {
        cout << endl;
        cout << "Escolha uma opção" << endl;
        cout << "1.Inserir elemento na pilha" << endl;
        cout << "2.Remover o elemento do topo da pilha." << endl;
        cout << "3.Verificar o elemento do topo da pilha sem removê-lo." << endl;
        cout << "4.Verificar se a pilha está vazia." << endl;
        cout << "5.Exibir o tamanho da pilha." << endl;
        cout << "0.Sair" << endl;
        cin >> opc;

        system("cls");

        switch(opc)
        {
        case 1:
            cout << "Digite 0 para sair!" << endl;
            do
            {
                cout << "Digite um numero: " << endl;
                cin >> valor;
                if (valor != 0)
                {
                    num.push(valor);
                }
            }
            while(valor != 0);
            system("CLS||CLEAR");
            break;
        case 2:
            do
            {
                valor = -9;
                if(num.empty() || valor == 0)
                {
                    cout << "Pilha Vazia" << endl;
                    break;
                }
                else
                {
                    num.pop();
                    cout << "Ultimo elemento removido!" << endl;
                    cout << "Deseja remover o proximo?" << endl;
                    cout << "(1) - SIM || (0) - NAO" << endl;
                    cin >> valor;
                }
                system("Cls");
            }
            while(valor != 0);
            break;
        case 3:
            if(num.empty())
            {
                cout << "Pilha Vazia" << endl;
                break;
            }
            else
            {
                cout << "Ultimo elemento da pilha: " << num.top() << endl;
            }
            break;
        case 4:
            if(num.empty())
            {
                cout << "Pilha Vazia" << endl;
            }
            else
            {
                cout << "Pilha nao vazia" << endl;
            }
            break;
        case 5:
            cout << "Tamanho da Pilha: " << num.size() << endl;
            break;
        default:
            break;
        }

    }
    while(opc != 0);

}
