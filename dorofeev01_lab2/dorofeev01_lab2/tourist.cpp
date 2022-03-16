#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "tourist.h"
using namespace std;

struct tourist enterTourist() { //Функция ввода 
	tourist touristt;
	printf("\n\nВведите фамилию: ");
	scanf("%s", &touristt.surname);
	while (getchar() != '\n');
	printf("Введите имя: ");
	scanf("%s", &touristt.name);
	while (getchar() != '\n');
	printf("Введите отчество: ");
	scanf("%s", &touristt.patronymic);
	while (getchar() != '\n');
	printf("\n\nДата вашего рождения: ");
	touristt.trst = enterDate();
	return touristt;
}
struct tourist createTourist(char n[15], char s[25], char p[30], date trstС) {
	tourist touristt;
	strcpy(touristt.name, n);
	strcpy(touristt.surname, s);
	strcpy(touristt.patronymic, s);
	touristt.trst = trstС;
	return touristt;
}
void printTourist(tourist tourist1) {
	printf("\n\nФИО %s %s %s", tourist1.surname, tourist1.name, tourist1.patronymic);
	printf("\nДата Рождения: ");
	printDate(tourist1.trst);

}
