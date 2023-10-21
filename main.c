#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 6
#define MIN 1

int position = 1;
int keyPressed = 0;

void arrowHere(int realPosition, int arrowPosition)
{
    if (realPosition == arrowPosition)
    {
        printf("        ");
    }
    else
    {
        printf("");
    }
}

void pressAnyKey()
{
    printf("Press any key to continue . . . ");
    getch();
}

void segitigaBiasa()
{
    system("cls");
    int tinggi;
    printf("Masukkan tinggi: ");
    scanf("%d", &tinggi);

    for (int i = 1; i <= tinggi; i++)
    {
        for (int l = tinggi; l > i; l--)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    position = 1;
    keyPressed = 0;
    pressAnyKey();
}

void segitigaTengah()
{
    system("cls");
    int i, space, rows, star = 0;
    printf("Masukkan tinggi: ");
    scanf("%d", &rows);

    for (i = 0; i < rows - 1; i++)
    {
        for (space = 1; space < rows - i; space++)
        {
            printf(" ");
        }
        for (star = 0; star <= 2 * i; star++)
        {
            if (star == 0 || star == 2 * i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (i = 0; i < 2 * rows - 1; i++)
    {
        printf("*");
    }
    printf("\n");
    position = 1;
    keyPressed = 0;
    pressAnyKey();
}

void segitigaTerbalik()
{
    system("cls");
    int tinggi;
    printf("Masukkan tinggi: ");
    scanf("%d", &tinggi);

    for (int i = 0; i < tinggi; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < 2 * (tinggi - i) - 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }
    printf("\n");
    position = 1;
    keyPressed = 0;
    pressAnyKey();
}

void segitigaTerbalikTengah()
{
    system("cls");
    int tinggi;
    printf("Masukkan tinggi: ");
    scanf("%d", &tinggi);

    for (int i = 1; i < tinggi; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (int k = (tinggi - i) * 2 - 1; k >= 1; k--)
        {
            if (k == 1 || k == (tinggi - i) * 2 - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    position = 1;
    keyPressed = 0;
    pressAnyKey();
}

void segitigaTerbalikTengahGabung()
{
    system("cls");
    int tinggi;
    printf("Masukkan tinggi: ");
    scanf("%d", &tinggi);

    for (int i = 0; i < tinggi; i++)
    {
        for (int j = 0; j < tinggi - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            if (k == 0 || k == 2 * i || i == tinggi - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        
        printf("\n");
    }
    for (int i = 1; i < tinggi; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = (tinggi - i) * 2 - 1; k >= 1; k--)
        {
            if (k == 1 || k == (tinggi - i) * 2 - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    position = 1;
    keyPressed = 0;
    pressAnyKey();
}

void menu()
{
    system("cls");

    while (keyPressed != 13)
    {
        system("cls");

        printf("====================================\n\n");
        arrowHere(1, position);
        printf("1. Segitiga biasa\n\n");
        arrowHere(2, position);
        printf("2. Lanjutan nomor 1\n\n");
        arrowHere(3, position);
        printf("3. Segitiga Terbalik\n\n");
        arrowHere(4, position);
        printf("4. Lanjutan nomor 4\n\n");
        arrowHere(5, position);
        printf("5. Penggabungan\n\n");
        arrowHere(6, position);
        printf("6. Exit\n\n");

        keyPressed = _getch();

        if (keyPressed == 80 && position < MAX)
        {
            position++;
        }
        else if (keyPressed == 72 && position > MIN)
        {
            position--;
        }
    }
}

int main()
{
    
    menu();

    switch (position)
    {
    case 1:
        segitigaBiasa();
        main();
        break;
    case 2:
        segitigaTengah();
        main();
        break;
    case 3:
        segitigaTerbalik();
        main();
        break;
    case 4:
        segitigaTerbalikTengah();
        main();
        break;
    case 5:
        segitigaTerbalikTengahGabung();
        main();
        break;
    default:
        break;
    }
    return 0;
}
