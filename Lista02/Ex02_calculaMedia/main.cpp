#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

struct
{
    float nota1[5];
    float nota2[5];
    float mediaAluno[5];
    float mediaSala = 0;
    string aluno[5];
    int conta = 0;
}Info;

void EntradaNotas();
void Calculo();
void Exibe();

int main()
{
    setlocale(LC_ALL,"portuguese");

    EntradaNotas();
    Calculo();
    Exibe();
}

void EntradaNotas()
{
    for(int i = 0; i < 5; i++)
    {
        cout << "Digite a 1° nota  do aluno [" << i <<"]: ";
        cin >> Info.nota1[i];

        cout << "Digite a 2° nota  do aluno [" << i <<"]: ";
        cin >> Info.nota2[i];
        system("Clear||Cls");
    }
}

void Calculo()
{
    for(int i = 0; i < 5; i++)
    {
        Info.mediaAluno[i] = (Info.nota1[i] + Info.nota2[i])/2;

        if(Info.mediaAluno[i] >= 5)
        {
            Info.conta++;
            Info.aluno[i] = "Aprovado";

        }
        else
        {
            Info.aluno[i] = "Reprovado";
        }
    }

    for(int i = 0; i < 5; i++)
    {
        Info.mediaSala = (Info.mediaSala + Info.mediaAluno[i]);
    }
}

void Exibe()
{
    cout << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << "Aluno: " << i << endl;
        cout << "1° Nota: " << Info.nota1[i] << endl;
        cout << "2° Nota: " << Info.nota2[i] << endl;
        cout << "Media: " << Info.mediaAluno[i] << endl;
        cout << "Situação: " << Info.aluno[i] << endl;
        cout << endl;
    }

    cout << "Media da sala: " << Info.mediaSala << endl;
    cout << "Quantidade acima da media da sala: " << Info.conta << endl;

}
