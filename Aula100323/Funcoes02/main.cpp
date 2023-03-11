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

    cout << "Digite um número..." << endl;
    cin >> n;

    if(par(n))
    {
        cout << "O número " << n << " é par." << endl;
    }
    else
    {
        cout << "O número " << n << " é impar." << endl;
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
    cout << "Aulo do Módulo 02" << endl;
    cout << endl;
}
