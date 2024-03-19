#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int in(int g,int k)
{
    if (g>k)
        return rand()%100-50;
    else
        return 0;
}
void in_printf(int g,int u[g],char p)//g=a;g=b;g=c, u=A;u=B;u=C
{
    printf("Start масив %c\n",p);
    separator();
    for(int i=0; i<g; i++)
        printf("%d\t",u[i]);
    printf("\n");
    separator();
}
int condition(int r1,int g,int k,int u[g])
{
    int buf;
    for( r1 = 1; r1 <= k; r1++)
    {
        buf = u[g-1];
        for( int i = g-2; i>=0; i--)
        {
            u[i+1]= u[i];
        }
        u[0] = buf;
    }
}
void out(int g,int u[g],char p)
{
    printf("Changed масив %c\n",p);
    separator();
    for(int i=0; i<g; i++)
        printf("%d\t",u[i]);
    printf("\n");
    separator();
}
void separator()
{
    for(int i = 1; i < 9*13; i++)
        printf("-");
    printf("\n");
}
int main()
{
    setlocale (LC_ALL, "Ukrainian");
    const a = 10, b = 7, c = 13;
    int r,k,i,A[a],B[b],C[c];

    printf("|¬вод k:");
    scanf("%d",&k);
    separator();
    if(in(a,k) && in(b,k) && in(c,k))
    {
        for( i = 0; i<a && i<b && i<c; i++)//&&
        {
            A[i]=in(a,k);
            B[i]=in(b,k);
            C[i]=in(c,k);
        }
        in_printf(a,A,'A');
        in_printf(b,B,'B');
        in_printf(c,C,'C');

        printf("\n");

        condition(r,a,k,A);
        condition(r,b,k,B);
        condition(r,c,k,C);

        out(a,A,'A');
        out(b,B,'B');
        out(c,C,'C');
    }
    else
        printf("”мова не виконуЇтьс€\n");
    return 0;
}
