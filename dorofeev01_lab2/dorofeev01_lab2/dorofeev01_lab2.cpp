#define _CRT_SECURE_NO_WARNINGS
#include "locale.h"
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <Windows.h>
#include "date.h" // дата

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int numberOFdays = 0;
    date dataEST, dataINPUT;
    dataEST = createDate(22, 11, 2021); //Функция создания даты
    dataINPUT = createDate(11, 11, 2021); //Функция создания даты
    numberOFdays = difDate(dataEST, dataINPUT); //Количество дней между датами
    printf("Введены даты: ");
    printDate(dataEST); //Вывод даты
    printf(" и ");
    printDate(dataINPUT); //Вывод даты
    printf("\nКоличество дней: %d", numberOFdays);
}
