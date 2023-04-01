#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(4);
    float n;

    cout << "Digite um numero: ";
    cin >> n;

    cout << "N = " << n << endl;
    for(int i = 1; i < 100; i++)
    {
        n = n/2;

        cout << "N = " << n << endl;
    }

}
