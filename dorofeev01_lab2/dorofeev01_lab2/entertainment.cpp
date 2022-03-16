#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "entertainment.h"
using namespace std;

struct entertainment enterEntertainment() {
	entertainment entrtmm;
	printf("\nВведите количество экскурсий: ");
	while (scanf("%d", &entrtmm.nexcursion) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите количество экскурсий: ");
	}
	printf("Введите количество музеев: ");
	while (scanf("%d", &entrtmm.nmuseum) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите количество музеев: ");
	}
	return entrtmm;
}

struct entertainment createInventory(int ne, int nm) { // Функция создания
	entertainment entrtmm;
	entrtmm.nexcursion = ne;
	entrtmm.nmuseum = nm;
	return entrtmm;
}
void printEntertainment(entertainment entrtm1) { // Функция вывода
	printf("\nКоличество экскурсий: %d", entrtm1.nexcursion);
	printf("\nКоличество музеев: %d", entrtm1.nmuseum);
}

void valueEntertainment(entertainment entrtm1) { // Функция подсчёта рейтинга судьи
	entertainment entrtmm;
	int rPr = 0;
	rPr = (entrtm1.nexcursion * 1200) + (entrtm1.nmuseum * 250);
	printf("\nИтоговая стоимость: %d ", rPr);
}
