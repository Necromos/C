#include<stdio.h>

struct point {
    int x;
    int y;
};

struct rect {
    struct point ll;            /* lower left */
    struct point ur;            /* upper right */
};

struct point makepoint(int x, int y)
{
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
};

struct rect makerect(struct point ll, struct point ur)
{
    struct rect temp;
    temp.ll = ll;
    temp.ur = ur;
    return temp;
};

/* ptinrect: zwroci 1 jezli p nalezy do r, 0 jezli nie nalezy */
int ptinrect(struct point p, struct rect r)
{
    return p.x >= r.ll.x && p.x < r.ur.x && p.y >= r.ll.y && p.y < r.ur.y;
};

/* rectinrect: zwroci 1 jezeli r1 jest zawarty w r2, 0
    w przeciwnym przypadku */
int rectinrect(struct rect r1, struct rect r2)
{
    return ptinrect(r1.ll, r2) && ptinrect(r1.ur, r2);
};

void scanrect (char *prompt,struct rect *r){
    printf(prompt);
    printf("\nll.x: ");
    scanf("%i", &((*r).ll.x));
    printf("ll.y: ");
    scanf("%i", &((*r).ll.y));
    printf("ur.x: ");
    scanf("%i", &((*r).ur.x));
    printf("ur.y: ");
    scanf("%i", &((*r).ur.y));
};
