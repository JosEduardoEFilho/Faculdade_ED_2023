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

//Definição da função alo
void alo(void)
{
    cout << "Função Simples" << endl;
}
