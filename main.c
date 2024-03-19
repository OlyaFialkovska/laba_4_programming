#include <stdio.h>
#include <stdlib.h>

//Заповнення елементів масива
void fill (int *mas, int nrow, int ncol)

{
    for (int i = 0; i < nrow; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            mas[i*ncol + j] = i+j+2;
            // printf(" %2d", mas[i*ncol + j]);
        }
    }
}

//Знаходження першого мінімального і останнього максимального
int find (int *mas, int nrow, int ncol)
{
    for(int i=0;i<nrow;i++)
        for(int j=0;j<ncol;j++)
    if(a[i]== 32767)
    {
        int imax=0,imin=0;

    int min = mas[0];
    for (int j = 0; j < ncol; j++)
    {
        for(int i = 0; i < nrow; i++)
        {
            if (min > mas[i*ncol + j])
            {
                min = mas[i*ncol + j]; // Максимальне
                imin=i*ncol + j;
            }
        }
    }
    printf("  Min = %d\n", min);

    int max = mas[0];
    for (int j = 0; j < ncol; j++)
    {
        for(int i = 0; i < nrow; i++)
        {
            if (max <= mas[i*ncol + j])
            {
                max = mas[i*ncol + j]; //Мінімальне
                imax=i*ncol + j;
            }
        }
    }
    printf("  Max = %d\n", max);

    mas[imin]=max; //зміна
    mas[imax]=min;
    printf("\n");
    printf("  Changed array\n");
    return 1;
    }else
    {
         return 0;
    }


}
//Виведення масивів
void Out (int *mas, int nrow, int ncol)
{
    for (int i = 0; i < nrow; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            printf(" %2d", mas[i*ncol + j]);
        }
        printf("\n");
    }
}

main()
{
    int A[4][4], B[5][9], C[6][6];

    printf("  Array A\n");
    fill (&A,4,4);
    Out (&A,4,4);
    find (&A,4,4);
    Out (&A,4,4);
    printf("\n");

    printf("  Array B\n");
    fill (&B,5,9);
    Out (&B,5,9);
    find (&B,5,9);
    Out (&B,5,9);
    printf("\n");

    printf("  Array C\n");
    fill (&C,6,6);
    Out (&C,6,6);
    find (&C,6,6);
    Out (&C,6,6);

    return 0;
}
