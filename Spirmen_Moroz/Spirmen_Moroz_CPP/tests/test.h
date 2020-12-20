#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

#include <iostream>

#include "../src/array.h"

// Тест методу свторення масиву та додавання одного елементу
void testAddElement();

// Тест методу додавання масиву елементів
void testAddArray();

// Тест методу додавання двух масивів
void testAddition();

// Тест методу видалення елементу по індексу
void testDeleteByIndex();

// Тест метод видалення елементу за значенням
void testDeleteByValue();

//Загальний тест
void runTest();

#endif // TEST_H_INCLUDED
