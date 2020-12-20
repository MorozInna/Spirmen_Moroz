#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include <iostream>
#include <vector>

using namespace std;

// Клас Array
class Array
{
protected:
    // зміна arr (vector) - масив цілих чисел
    vector<int> arr;
public:
    // Конструктор класу Array
    Array(){}

    // Конструктор класу Array з додаванням одного елементу
    Array(int element);

    // Конструктор класу Array з додаванням масиву елементу
    Array(vector<int> a);

    // Деструктор класу Array
    ~Array(){}

    // Метод виведення масиву
    void printArray();

    // Метод додавання одного елементу
    void addElement(int element);

    // Метод додавання масиву елементів
    void addArray(vector<int> a);

    // Перевантажений оператор додавання - додає два класи
    Array operator+(const Array & arr1);

    // Метод видалення елементу по індексу
    void deleteByIndex(int i);

    // Метод видалення елементу за значенням
    void deleteByValue(int a);

    // Перевантажений оператор множення - робить перетин по значенню двох масивів
    Array operator*(const Array & arr1);

    // Перевантажений оператор віднімання - робить різницю по входженню елементів
    Array operator-(const Array & arr2);
};

#endif // ARRAY_H_INCLUDED
