#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdio>
using namespace std;

int i,j,k,suma1,suma2;
char m[101][101],str[101];

int main()
{
    //Problema 2
    ifstream infile; // Input file stream

    infile.open("/home/vikro31/Atom/Poo-Lab-1/in.txt");    // Step 1: Open file
    while (!infile.eof()) // Step 2: Citim din fisier cu un loop
    {
        int i;
        char c[256];
        infile.getline(c,256);
        for(i=0;i<strlen(c);i++) // transformam numarul citit ca char in int
        {
            if(c[i]>=48 && c[i]<=57)
                suma1=suma1*10+(c[i]-48);
        }
        suma2 = suma2 + suma1;
        suma1=0;
    }
    infile.close(); // Step 3: Am terminat de parcurs fila, o inchidem
    cout<<suma2;
    return 0;
}
