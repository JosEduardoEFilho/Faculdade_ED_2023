#include <iostream>
#include <locale>

using namespace std;

void alo(void);

//Programa Principal
int main()
{
    setlocale(LC_ALL,"portuguese");
    alo();
}

//Defini��o da fun��o alo
void alo(void)
{
    cout << "Fun��o Simples" << endl;
}
