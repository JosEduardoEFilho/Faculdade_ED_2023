#include <iostream>
#include <locale>
#include <cstdlib>
#include <string>

using namespace std;

typedef struct person
{
    string nome;
    string endereco;
    char cpf[11];
    unsigned short idade;
}Pessoa;

int main()
{
    Pessoa Pessoas[5];
    setlocale(LC_ALL,"portuguese");

    cout << "Cadastro de Pessoas";
    cout << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << "Digite o nome: ";
        getline(cin, Pessoas[i].nome);

        cout << "Digite o CPF: ";
        cin >> Pessoas[i].cpf;
        cin.ignore();

        cout << "Digite a idade: ";
        cin >> Pessoas[i].idade;
        cin.ignore();

        cout << "Digite o endereço: ";
        getline(cin, Pessoas[i].endereco);
        cin.ignore();
        system("Cls||Clear");


    }

    for (int i = 0; i < 5; i++)
    {
        cout << i << " - Nome: " << Pessoas[i].nome << endl;
        cout << i << " - CPF: " << Pessoas[i].cpf << endl;
        cout << i << " - Idade: " << Pessoas[i].idade << endl;
        cout << i << " - Endereço: " << Pessoas[i].endereco << endl;
        cout << endl;
    }
}
