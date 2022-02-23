#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdio>
using namespace std;

int i,j,k,suma1,suma2;
char m[101][101],str[101];

int main()
{
//Problema 3
scanf("%[^\n]%*c", str);
char *p = strtok(str, " ");
i = 0;
while(p != NULL){
    strcpy(m[i], p);
    i++;
    p = strtok(NULL, " ");
}
for(j=0; j < i; j++)//compar cuvintele din matrice si fac schimbul intre pentru ordine descrescatoare cuvintelz
{
    for(k= j+1; k<=i; k++)
    {
        if(strlen(m[j]) < strlen(m[k]))
        {
            strcpy(str,m[j]);
            strcpy(m[j],m[k]);
            strcpy(m[k],str);
        }
        if(strlen(m[j]) == strlen(m[k])) // ordonez lexicografic daca cuvintele au aceasi lungime
        {
            if(strcmp(m[j],m[k]) > 0)
            {
                strcpy(str,m[j]);
                strcpy(m[j],m[k]);
                strcpy(m[k],str);
            }
        }
    }
}
for(j=0; j <= i; j++) // afisez matricea
{
    printf("%s\n",m[j]) ;
}
    return 0;
}
