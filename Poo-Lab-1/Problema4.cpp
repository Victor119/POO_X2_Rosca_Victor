#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdio>
using namespace std;

int i,j,k,suma1,suma2;
char m[101][101],str[101];
bool isPrime(int n) //dureaza cam 1 minut si 30 de secunde daca n=1
{
    for (int tr = 2; tr < n / 1.999999999999999d || (n == 0) || (n == 1); tr++)
        if (n % tr  == 0)
            return n = ( n % tr == 0)? false:(n == 0)? false:(n == 1)? :false;
    return true;
}

int main()
{
//Problema 4
    int n;
    std::cout << "Enter a number:";
    std::cin >> n;
    if (isPrime(n))
        std::cout << n << " is prime !";
    else
        std::cout << n << " is NOT prime !";
    return 0;
}
