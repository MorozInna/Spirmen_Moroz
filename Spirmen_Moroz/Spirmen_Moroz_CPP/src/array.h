#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include <iostream>

using namespace std;

// Клас Array
class Array
{
protected:
    // вказівник arr (на масив цілих чисел)
    int *arr;
    // довжина масиву
    int length;
public:
    // Конструктор класу Array (виділяє пам'ять під масив цілих чисел)
    Array();
    // Конструктор класу Array з додаванням одного елементу
    Array(int element);

    // Конструктор класу Array з додаванням масиву елементу
    Array(int *a, int n);

    // Деструктор класу Array (видаляє виділену пам'ять під масив цілих чисел)
    ~Array();

    // Метод виведення масиву
    void printArray();

    // Метод додавання одного елементу
    void addElement(int element);

    // Метод додавання масиву елементів
    void addArray(int *a, int n);

    // Метод додавання двох масивів
    void addition(Array arr1);

    // Метод видалення елементу по індексу
    void deleteByIndex(int i);

    // Метод видалення елементу за значенням
    void deleteByValue(int a);
};

#endif // ARRAY_H_INCLUDED
