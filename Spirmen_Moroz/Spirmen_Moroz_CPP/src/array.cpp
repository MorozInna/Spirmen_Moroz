#include "array.h"

Array::Array()
{
    cout << "Created array" << endl;
    length = 0;
    arr = new int[length];
}

Array::Array(int element)
{
    cout << "Created array" << endl;
    length = 0;
    arr = new int[length];
    this->addElement(element);
}

Array::Array(int *a, int n)
{
    cout << "Created array" << endl;
    length = 0;
    arr = new int[length];
    this->addArray(a, n);
}

Array::~Array()
{
    cout << "Delete array" << endl;
    delete [] arr;
}

void Array::printArray()
{
    cout << "Array: ";
    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void Array::addElement(int element)
{
    length++;
    arr[length - 1] = element;
}

void Array::addArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
        addElement(a[i]);
}

void Array::addition(Array arr1)
{
    for (int i = 0; i < arr1.length; i++)
    {
        addElement(arr1.arr[i]);
    }
}

void Array::deleteByIndex(int i)
{
    for (int j = i; j < length - 1; j++)
        arr[j] = arr[j+1];
    length--;
}

void Array::deleteByValue(int a)
{
    for (int i = 0; i < length; i++)
        if (arr[i] == a)
            deleteByIndex(i);
}
