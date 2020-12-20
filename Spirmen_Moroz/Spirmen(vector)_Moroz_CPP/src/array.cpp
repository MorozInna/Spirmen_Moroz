#include "array.h"

Array::Array(int element)
{
    this->addElement(element);
}

Array::Array(vector<int> a)
{
    this->addArray(a);
}

void Array::printArray()
{
    cout << "Array: ";
    for (int i = 0; i < int(arr.size()); i++)
        cout << arr.at(i) << " ";
    cout << endl;
}

void Array::addElement(int element)
{
    arr.push_back(element);
}

void Array::addArray(vector<int> a)
{
    for (int &element : a)
        arr.push_back(element);
}

Array Array::operator+(const Array & arr1)
{
    this->addArray(arr1.arr);
    return *this;
}

void Array::deleteByIndex(int i)
{
    arr.erase(arr.begin() + i);
}

void Array::deleteByValue(int a)
{
    for (int i = 0; i < int(arr.size()); i++)
        if (arr.at(i) == a)
            deleteByIndex(i);
}

Array Array::operator*(const Array & arr1)
{
    Array arr2;
    for (int i = 0; i < int(this->arr.size()); i++)
        for (int j = 0; j < int(arr1.arr.size()); j++)
            if (this->arr[i] == arr1.arr[j])
            {
                arr2.addElement(arr[i]);
                j = 0;
                i++;
            }
    return arr2;
}

Array Array::operator-(const Array & arr2)
{
    for (int &element1 : this->arr)
        for (int element2 : arr2.arr)
            if (element1 == element2)
                this->deleteByValue(element1);
    return *this;
}
