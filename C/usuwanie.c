#include <stdio.h>
#include <stdlib.h>

int dlugosc(char *napis)
{
    int i=0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}
void znak(char *napis)
{
    for(int i = 0;i<=7;i++){
        if(i%2== 0){
        printf("%c",napis[i]);
        }
    }
}


int main()
{
    char napis[]="gigakox";
    znak(napis);
    return 0;
}
