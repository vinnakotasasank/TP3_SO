#include <stdarg.h>
#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
#include "./include/stdio.h"

int main (void){
	clear_screen();
	int a;
	printf("Buenos dias!\n");
	printf("Deme el numero que quiera:");
	getNum(&a);
	char * memory = (char *) malloc(3000);
	char * memory2 = (char *) malloc(2000);
	char * memory3 = (char *) malloc(2500);
	char * palabra = "Hola Mundo";
	printf("\nEl puntero reservado es:\n");
	printHexadecimal(memory);
	printf("\n");
	printf("El puntero reservado es:\n");
	printHexadecimal(memory2);
	printf("\n");
	printf("El puntero reservado es:\n");
	printHexadecimal(memory3);
	printf("\n");
	strcpy(memory,palabra);
	strcpy(memory2,"Fortnite > PUBG");
	strcpy(memory3,"Rubia aprobameee");
	printf("%s\n",memory);
	printf("%s\n",memory2);
	printf("%s\n",memory3);
	printf("Deme otro numero que quiera:");
	getNum(&a);
	return 0;
}









