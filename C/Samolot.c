#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Samolot{
    char *model;
    int liczba_silnikow;
};

int dlugosc(int n, struct Samolot tab[n])
{
    int x,y = 90;
    for(int i=0;i<n;i++)
    {
        if(y > tab[i].liczba_silnikow)
        {
            x = i;
            y = tab[i].liczba_silnikow;
        }
    }
    return x;
}

int main()
{
    struct Samolot tab[2];
    tab[0].model = "Kozakojet";
    tab[0].liczba_silnikow = 5;


    tab[1].model = "Redykajny-Transport";
    tab[1].liczba_silnikow = 3;





     printf("%s Liczba Silnikow %d",tab[dlugosc(2,tab)].model,tab[dlugosc(2,tab)].liczba_silnikow);

    return 0;
}
