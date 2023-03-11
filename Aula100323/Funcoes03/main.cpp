#include <iostream>
#include <locale>
using namespace std;

int quadrado(int n);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int s1, s2, s3;
    cout << "Entre tres inteiros..." << endl;
    cin >> s1 >> s2 >> s3;

    if(s1 > 0 && s2 > 0 && s3 > 0 && (quadrado(s1) + quadrado(s2) == quadrado(s3) || quadrado(s2) + quadrado(s3) == quadrado(s1) || quadrado(s3) + quadrado(s1) == quadrado(s2)))
    {
        cout << " " << s1 << " " << s2 << " " << s3 << " podem formar um triangulo reto" << endl;
    }
    else
    {
        cout << " " << s1 << " " << s2 << " " << s3 << " nao podem formar um triangulo reto" << endl;
    }

}

int quadrado(int n)
{
    return n*n;
}
