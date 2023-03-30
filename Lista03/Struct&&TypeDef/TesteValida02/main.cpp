#include <iostream>
#define tamanho 11
using namespace std;
//73859702068
int main()
{
    int cpf[tamanho];
    cpf[0] = 7;
    cpf[1] = 3;
    cpf[2] = 8;
    cpf[3] = 5;
    cpf[4] = 9;
    cpf[5] = 7;
    cpf[6] = 0;
    cpf[7] = 2;
    cpf[8] = 0;
    cpf[9] = 6;
    cpf[10] = 8;
    int digito01 = 0;
    int digito02 = 0;
    int aux = 0;

    for(int i = 0; i < 9; i++)
    {
        aux = aux + (cpf[i]*(10-i));
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
        aux = aux + (cpf[i]*(11-i));
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
    if((digito01 == cpf[9])&&(digito02 == cpf[10]))
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
