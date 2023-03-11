#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");

    int idade = 0,qtd = 0,op = 0,med = 0, soma = 0;
    float MB = 0.0,B = 0.0,R = 0.0,I = 0.0,percent = 0.0;

    do
    {
        cout << "Informe a sua idade: " << endl;
        cin >> idade;
        if(idade <= 0)
        {
            break;
        }

        cout << "Escolha um critério de avaliação para o filme: " << endl;
        cout << "(1) - Ótimo" << endl;
        cout << "(2) - Bom" << endl;
        cout << "(3) - Regular" << endl;
        cout << "(4) - Ruim" << endl;
        cin >> op;

        switch(op)
        {
        case 1:
            qtd++;
            MB++;
            break;
        case 2:
            qtd++;
            B++;
            break;
        case 3:
            qtd++;
            R++;
            break;
        case 4:
            qtd++;
            I++;
            break;
        default:
            break;
        }
        soma = soma + idade;

    }
    while((idade > 0));

    med = soma/qtd;
    cout << "Media de idades: " << med << " anos!" <<endl;
    percent = ((MB/qtd)*100);
    cout << "Ótimo: " << percent << "%" << endl;
    percent = ((B/qtd)*100);
    cout << "Bom: " << percent << "%" << endl;
    percent = ((R/qtd)*100);
    cout << "Regular: " << percent << "%" << endl;
    percent = ((I/qtd)*100);
    cout << "Ruim: " << percent << "%" << endl;
    cout << "Total Votos: " << qtd << endl;
}
