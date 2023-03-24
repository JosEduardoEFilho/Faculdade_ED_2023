#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

struct
{
    float vetorA[10];
    float vetoM[10];
    float num;
}Vetor;

void Entrada();
void Calcula();
void Mostra();

int main()
{
     Entrada();
     Calcula();
     Mostra();
}

void Entrada()
{
    for(int i = 0; i < 10; i++)
    {
        cout << "Digite um numero: ";
        cin >> Vetor.vetorA[i];
        system("cls||Clear");
    }

    cout << "Digite um numero para multiplicar: ";
    cin >> Vetor.num;
    system("cls||Clear");
}

void Calcula()
{
    for (int i = 0; i < 10; i++)
    {
        Vetor.vetoM[i] = Vetor.vetorA[i] * Vetor.num;
    }
}

void Mostra()
{
    cout << "Vetor Origem" << endl;

    for(int i = 0; i < 10; i++)
    {
        cout << Vetor.vetorA[i] << " ";
    }
    cout << endl;
    system("pause");
    system("Clear||CLS");
    cout << "Calculo" << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << Vetor.vetorA[i] << " x " << Vetor.num << " = " << Vetor.vetoM[i] << endl;
    }
}
