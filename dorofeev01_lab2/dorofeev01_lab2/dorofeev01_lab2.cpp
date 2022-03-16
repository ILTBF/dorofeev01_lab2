#define _CRT_SECURE_NO_WARNINGS
#include "locale.h"
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <Windows.h>
#include "date.h" // дата
#include "tourist.h" // турист
#include "hotel.h" // отель
#include "entertainment.h" // развлечения
#include "budget.h" // развлечения

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int numberOFdays = 0;
    date dataEST, dataINPUT;
    tourist touristFIO;
    hotel hotelINF;
    entertainment entertainmentINF;
    budget budgetINF;
    dataEST = createDate(22, 11, 2021); //Функция создания даты
    dataINPUT = createDate(11, 11, 2021); //Функция создания даты
    numberOFdays = difDate(dataEST, dataINPUT); //Количество дней между датами
    printf("Введены даты: ");
    printDate(dataINPUT); //Вывод даты
    printf(" и ");
    printDate(dataEST); //Вывод даты
    printf("\nКоличество дней поездки: %d", numberOFdays);
    touristFIO = enterTourist(); //Ввод данных о туристе
    printTourist(touristFIO);//Вывод данных о туристе
    hotelINF = enterHotel(); // Ввод данных об отеле
    valueHotel(hotelINF); // Подсчёт цены
    printHotel(hotelINF); // Вывод данных об отеле
    entertainmentINF = enterEntertainment(); // Ввод данных о развлечениях
    valueEntertainment(entertainmentINF); // Расчет стоимости
    printEntertainment(entertainmentINF); // Вывод данных 
    budgetINF = enterBudget(); // Ввод данных о развлечениях
    valueBudget(budgetINF); // Расчет стоимости
    printf("\n\n");
}
