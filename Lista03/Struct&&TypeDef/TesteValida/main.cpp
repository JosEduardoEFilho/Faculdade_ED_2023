#include <iostream>


using namespace std;

int main()
{
    int cpf[10];
    cpf[0] = 5;
    cpf[1] = 2;
    cpf[2] = 2;
    cpf[3] = 2;
    cpf[4] = 2;
    cpf[5] = 8;
    cpf[6] = 8;
    cpf[7] = 2;
    cpf[8] = 8;
    cpf[9] = 5;
    cpf[10] = 0;

    for(int i = 0; i < 11; i++)
    {
        cout << cpf[i] << " ";
    }

    cout << endl;

    int cpfValida[10];
    int SomaDigito = 0;
    int rest = 0;
    int calcula = 11;
    bool ok9 = false;
    bool ok10 = false;

    //Valida digito 01
    for(int i = 0; i < 9; i++)
    {
        calcula = (calcula - 1);
        cpfValida[i] = cpf[i];
        cpfValida[i] = (cpfValida[i] * calcula);

        SomaDigito = SomaDigito + cpfValida[i];
    }

    rest = (SomaDigito % 11);

    if( (11 - rest) >= 10)
    {

        cpfValida[9] = 0;
    }
    else
    {
        cpfValida[9] = (11-rest);
    }

    cout << "1 Digito " << cpfValida[9] << " " << endl;

    if(cpfValida[9] != cpf[9])
    {
        ok9 = false;
    }
    else
    {
        ok9 = true;
    }


    calcula = 12;
    SomaDigito = 0;
    rest = 0;
    //Valida digito 02
    for(int i = 0; i < 10; i++)
    {
        calcula = (calcula - 1);
        //cpfValida[i] = cpf[i];
        cpfValida[i] = (cpfValida[i] * calcula);

        SomaDigito = SomaDigito + cpfValida[i];
    }

    rest = (SomaDigito % 11);

    if( (11 - rest) >= 10)
    {

        cpfValida[10] = 0;
    }
    else
    {
        cpfValida[10] = (11-rest);
    }
    cout << "\n2 Digito " << cpfValida[10] << endl;

    if(cpfValida[10] != cpf[10])
    {
        ok10 = false;
    }
    else
    {
        ok10 = true;
    }

    //validacao
    if(ok9 != ok10)
    {
        cout << false;
    }
    else
    {
        cout << true;
    }


    cout << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << cpf[i] << "-";
    }
}
