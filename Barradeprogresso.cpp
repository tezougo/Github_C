
	#include <stdio.h>

#include <windows.h>

#include <conio.h>



int main ()

{

    int i=0;

    printf("carregando\n");

    

		while(i!=1)

		{

		 	  printf("|");

        Sleep(100);

				system("cls");

        printf("/");

        Sleep(100);

        system("cls");

        printf("-");

        Sleep(100);

        system("cls");

        printf("\\");

        Sleep(100);

        system("cls");

     }

    printf("\narquivo carregado com sucesso");

    getch();

    return 0;

}

