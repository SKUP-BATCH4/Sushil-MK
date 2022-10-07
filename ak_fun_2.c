#include<stdio.h>
#define pi 3.142
int main()
{
    int r;
    printf ("enter the radius:");
    scanf("%d",&r);

    area (r);
    cir (r);

}
int area(r)
{
    int area;
    area=pi*r*r;
    printf (" this is  area circle  %d \n",area);
}
int cir(r)
{
    int cir;
    cir=pi*r*2;
     printf ("this is circum of circle %d",cir);

}

