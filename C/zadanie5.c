#include <stdio.h>
#include <stdlib.h>
struct element
{
    float x;
    struct element * next;
};
struct element *potrojenie(struct element* Lista)
{
    struct element *pomoc;
    int liczba;
    while(Lista!=NULL)
    {
       liczba=Lista->x;
       pomoc=Lista->next;
        if((pomoc!=NULL) && (pomoc->x<0))
        {
            Lista->x=liczba*3;
        }
        Lista=Lista->next;
    }
    return Lista;
};
int main()
{
    struct element* lista=malloc(sizeof(struct element));
    lista->x=-4;
    lista->next=malloc(sizeof(struct element));
    lista->next->x =4;
    lista->next->next=malloc(sizeof(struct element));
    lista->next->next->x=-4;
    lista->next->next->next=NULL;
    potrojenie(lista);
    printf("%f", lista->x);
    return 0;
}
