#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

void Kalk(string n, int a)
{
    cout << n << " " << a << endl;
}

int Summa(int a, int b)
{
    return a + b;
}

int Razn(int a, int b)
{
    return a - b;
}

int Umn(int a, int b)
{
    return a * b;
}

int del(int e, int g)
{
    if (g != 0) {
        return e / g;
    }
    else {
        cout << "деление на ноль!" << endl;
        return 0; 
    }
} 

int main() {
    Kalk("Summa = ", Summa(25, -44));
    Kalk("Razn = ", Razn(23, -44));
    Kalk("Umn = ", Umn(23, -44));
    Kalk("Del = ", del(23, -44)); 
}
