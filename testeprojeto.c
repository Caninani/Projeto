#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "testefuncao.h"
int calcularvaloranual(int opcaomensal, int resultado);
void menu();
int main()
{
	setlocale(LC_ALL, "portuguese");
	menu();
	return 0;
}