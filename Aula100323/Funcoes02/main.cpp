#include <iostream>
#include <locale>

using namespace std;

bool par(int num);
void mensagem();

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n = 0;

    mensagem();

    cout << "Digite um n�mero..." << endl;
    cin >> n;

    if(par(n))
    {
        cout << "O n�mero " << n << " � par." << endl;
    }
    else
    {
        cout << "O n�mero " << n << " � impar." << endl;
    }

}

bool par(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void mensagem()
{
    cout << "Aulo do M�dulo 02" << endl;
    cout << endl;
}
