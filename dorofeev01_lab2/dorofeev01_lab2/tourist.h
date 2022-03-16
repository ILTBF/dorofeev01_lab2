#pragma once
#include "date.h"
struct tourist { //Структура арендатор
	char name[15]; //имя
	char surname[25]; //фамилия
	char patronymic[30]; //отчество
	date trst; //связка со структурой дата
};

struct tourist createTourist(char n[15], char s[25], char p[30], date trstС); //Функция создания
struct tourist enterTourist(); //Функция ввода
void printTourist(tourist tourist1); //Функция вывода