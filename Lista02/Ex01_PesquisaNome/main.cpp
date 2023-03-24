#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

void Addnomes(string nome[10]);
void Mostranomes(string nome[10]);

int main()
{
    setlocale(LC_ALL,"portuguese");
    string nome[10];
    string novo;
    int op = 0;

    do
    {
        Addnomes(nome);
        Mostranomes(nome);
        system("pause");

        system("Cls||Clear");
        cout << "Procure por um nome: " << endl;
        cin >> novo;

        /* do
         {
             cout << "Procure por um nome: " << endl;
             cin >> novo;

         }
         while(novo == "Null" );*/

        //for(int i = 0; i < 10; i++)
        int i = 0;
        int conta = 0;
        while(conta != 1 || i < 10)
        {
            if(novo == nome[i])
            {
                conta++;
                cout << "Achei - " << novo << endl;
                break;
            }
            else
            {
                i++;
                system("Clear||Cls");

                /*nome[i] = novo;
                cout << "Nome adicionado no sistema!" << endl;*/
                if(i == 10)
                {
                    cout << "Não achei" << endl;
                    break;
                }
            }
        }

        Mostranomes(nome);
        cout << endl;
        cout << "Deseja fazer uma nova lista?" << endl;
        cout << "(1) - SIM" << endl;
        cout << "(2) - NÃO" << endl;
        cin >> op;
        system("Clear||CLS");
    }
    while(op != 2);


}

void Addnomes(string nome[10])
{
    int i = 0;

    while (i < 10)
    {
        cout << "Cadastre um nome: " << endl;
        cout << i << " - ";
        cin >> nome[i];
        system("Clear||Cls");

        i++;
    }

}

void Mostranomes(string nome[10])
{
    cout << endl;
    cout << "Lista de nomes" << endl;
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i << " - " << nome[i] << endl;
    }
    cout << endl;
}
