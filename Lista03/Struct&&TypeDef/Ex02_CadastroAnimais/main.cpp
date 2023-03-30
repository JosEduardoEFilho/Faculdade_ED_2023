#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

typedef struct
{
    string nomeAnimal;
    string especieAnimal;
    int idadeAnimal;
    float pesoAnimal;
} Animal;

typedef struct
{
    Animal mostra;
} ListaAnimais;

int main()
{
    int opc = 0;
    ListaAnimais dados[3];

    do
    {
        cout << "Cadastro de Animais" << endl;
        cout << endl;

        for(int i = 0; i < 3; i++)
        {
            cout << "Digite o nome do animal: ";
            getline(cin, dados[i].mostra.nomeAnimal);

            cout << "Digite a especie do animal: ";
            getline(cin, dados[i].mostra.especieAnimal);

            cout << "Digite a idade do animal: ";
            cin >> dados[i].mostra.idadeAnimal;

            cout << "Digite o peso do animal: ";
            cin >> dados[i].mostra.pesoAnimal;

            cin.ignore();
            system("cls||clear");
        }

        cout << "Animais Cadastrados"
             for(int i = 0; i < 3; i++)
        {
            cout << i << " - Nome: " << dados[i].mostra.nomeAnimal << endl;
            cout << i << " - Especie: " << dados[i].mostra.especieAnimal << endl;
            cout << i << " - Idade: " << dados[i].mostra.idadeAnimal << endl;
            cout << i << " - Peso: " << dados[i].mostra.pesoAnimal << endl;
            cout << endl;
        }

        cout << "Deseja realizar novos cadastros?" << endl;
        cout << "(0) - Não" << endl;
        cout << "(1) - Sim" << endl;
        cin >> opc;

    }
    while(opc!=0);


}
