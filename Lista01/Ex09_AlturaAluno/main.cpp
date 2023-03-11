#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");

    int qtd_aluno = 0;
    float altura = 0.0, altMaior = 0.0, altMenor = 0.0;

    altMenor = 1000;

    cout << "Digite a quantidade de alunos na sala: " << endl;
    cin >> qtd_aluno;

    cout << "Digite a altura do aluno: " << endl;
    cout << qtd_aluno << "° aluno: ";
    cin >> altura;
    altMaior = altura;

    if(altura > altMaior)
    {
        altMaior = altura;
    }
    if(altura < altMenor)
    {
        altMenor = altura;
    }

   while(qtd_aluno != 1)
   {
       qtd_aluno--;
       if(altura > altMaior)
       {
           altMaior = altura;
       }
       if((altura < altMenor) && (altura < altMaior))
       {
           altMenor = altura;
       }

       cout << "Digite a altura do aluno: " << endl;
       cout << qtd_aluno << "° aluno: ";
       cin >> altura;
   }

    cout << "Altura Maior: " << altMaior << "cm" << endl;
    cout << "Altura Menor: " << altMenor << "cm" << endl;
}
