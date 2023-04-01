#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    string estrutura;
    string especie;
    string alimentacao;

    cout << "Escolha o esqueleto do animal" << endl;
    cout << "vertebrado || invertebrado" << endl;
    cin >> estrutura;

    cout << endl;
    cout << "Escolha a especie do animal" << endl;
    cout << " ave   || mamifero" << endl;
    cout << "inseto || anelideo" << endl;
    cin >> especie;

    cout << endl;
    cout << "Escolha a alimentação do animal" << endl;
    cout << " carnivoro   ||  onivoro" << endl;
    cout << " herbivoro   || hematofago" << endl;
    cin >> alimentacao;

    if ((estrutura == "vertebrado") && (especie == "ave") && (alimentacao == "carnivoro"))
    {
        cout << "AGUIA" << endl;
    }
    else
    if((estrutura == "vertebrado") && (especie == "ave") && (alimentacao == "onivoro"))
    {
        cout << "POMBA" << endl;
    }
    else
    if((estrutura == "vertebrado") && (especie == "mamifero") && (alimentacao == "onivoro"))
    {
        cout << "HOMEM" << endl;
    }
    else
    if((estrutura == "vertebrado") && (especie == "ave") && (alimentacao == "herbivaro"))
    {
        cout << "VACA" << endl;
    }
    else
    if((estrutura == "invertebrado") && (especie == "inseto") && (alimentacao == "hematofago"))
    {
        cout << "PULGA" << endl;
    }
    else
    if((estrutura == "invertebrado") && (especie == "inseto") && (alimentacao == "herbivaro"))
    {
        cout << "LAGARTA" << endl;
    }
    else
    if((estrutura == "invertebrado") && (especie == "anelideo") && (alimentacao == "hematofago"))
    {
        cout << "SANGUESSUGA" << endl;
    }
    else
    if((estrutura == "invertebrado") && (especie == "anelideo") && (alimentacao == "onivoro"))
    {
        cout << "MINHOCA" << endl;
    }

}
