#include <iostream>
using namespace std;

int factorial(int n) {
    if ((n == 0) || (n == 1))
        return 1;
    else
        return n * factorial(n-1);
}

int fib(int n)
{
    if (n == 0)
        return 0;
    else
        if (n == 1)
            return 1;
        else
            return fib(n-1) + fib(n-2);
}

int main() {
    int n = 0;
    cout << "Escriba un numero: ";
    cin >> n;
    cout << "El resultado del factorial de n=" << n << " es: " << factorial(n) << endl;
    cout << "Escriba un numero: ";
    cin >> n;
    cout << "El resultado del fib de n=" << n << " es: " << fib(n);
    }