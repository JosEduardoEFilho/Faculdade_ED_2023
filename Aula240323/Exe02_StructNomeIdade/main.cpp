#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

struct pessoa
{
    string nome;
    int idade;
};

int main()
{
    pessoa p;
    cout << "Qual o seu nome: " << endl;
    getline(cin, p.nome);
    cout << "Quantos anos vc tem: ";
    cin >> p.idade;
    cout << "Idade: " << p.idade << " anos" << endl;
    cout << "Nome: " << p.nome << endl;
}
