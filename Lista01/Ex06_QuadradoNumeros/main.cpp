#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    cout << "Quadrado dos números: " << endl;
    for(int i = 0; i <= 20; i++)
    {
        cout << i << " = " << pow(i,2) << endl;
    }
}
