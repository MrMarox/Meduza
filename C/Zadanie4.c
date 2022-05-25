#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m,int tab[n][m])
{
    if(n %2!=0){
        n=n-1;
    }
    if(m %2!=0){
        m=m-1;
    }
    return &tab[n][m];
}
int main()
{
    int tab[2][2]={{1,2,3},{1,2}};
    printf("Wartosc:%d, adres:%p",tab[1][1],foo(tab,3,2));
    return 0;
}
