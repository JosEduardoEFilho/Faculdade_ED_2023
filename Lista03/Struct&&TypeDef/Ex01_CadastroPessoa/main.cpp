#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

typedef struct infoEndereco
{
    string rua;
    string bairro;
    string cep;
    string numero;
    string complemento;
}Endereco;

typedef struct dados
{
    string nome;
    int cpf[11];
    unsigned short idade;
    Endereco endereco;

}Pessoas;

void Cadastro();
bool validaCPF();

int main()
{
    setlocale(LC_ALL, "portuguese");
    Cadastro();
}

void Cadastro()
{
    Pessoas Pessoa[5];

    cout << "Tela de cadastro" << endl;
    cout << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << "Nome completo: ";
        getline(cin, Pessoa[i].nome);

        cout << "Idade: ";
        cin >> Pessoa[i].idade;
        cin.ignore();
        do
        //colocar validação
        {
            cout << "CPF(sem pontuação): ";
            cin >> Pessoa[i].cpf[11];

            validaCPF();
            if(validaCPF() == true)
            {
                cout << validaCPF() << endl;

            }
            else
            {
                cout << validaCPF() << endl;

            }
            cin.ignore();


        }while(validaCPF() != true);

        /*cin.ignore();
        cout << "Rua: ";
        getline(cin, Pessoa[i].endereco.rua);

        cout << "Bairro: ";
        getline(cin, Pessoa[i].endereco.bairro);

        cout << "CEP: ";
        getline(cin, Pessoa[i].endereco.cep);

        cout << "Número: ";
        getline(cin, Pessoa[i].endereco.numero);

        cout << "Complemento: ";
        getline(cin, Pessoa[i].endereco.complemento);

        cin.ignore();
        system("Clear||Cls");*/

    }
}

bool validaCPF()
{
    Pessoas Valida;

    int digito01 = 0;
    int digito02 = 0;
    int aux = 0;

    for(int i = 0; i < 9; i++)
    {
        aux = aux + (Valida.cpf[i]*(10-i));
    }

    aux = aux%11;

    if(aux < 2)
    {
        digito01 = 0;
    }
    else
    {
        digito01 = 11 - aux;
    }
    //cout << "Digito01 - " << digito01 << endl;

    //validacao02
    aux = 0;
    for(int i = 0; i < 10; i++)
    {
        aux = aux + (Valida.cpf[i]*(11-i));
    }

    aux = aux%11;

    if(aux < 2)
    {
        digito02 = 0;
    }
    else
    {
        digito02 = 11 - aux;
    }
    //cout << "Digito02 - " << digito02 << endl;
    //cout << "Digito01 - " << digito01 << endl;

    cout << endl;
    if((digito01 == Valida.cpf[9])&&(digito02 == Valida.cpf[10]))
    {
        cout << true;
    }
    else
    {
        cout << false;
    }

    cout << endl;
    /*for(int i = 0; i <= 10; i++)
    {
        cout << cpf[i] << " ";
    }*/

}
