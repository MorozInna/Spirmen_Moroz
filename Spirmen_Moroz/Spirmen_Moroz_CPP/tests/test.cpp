#include "test.h"

void runTest()
{
    testAddElement();

    testAddArray();

    testDeleteByIndex();

    testDeleteByValue();

    testAddition();
}

void testAddElement()
{
    cout << "\nTest add element:\n" << endl;
    Array A(9);
    A.addElement(2);
    A.addElement(-4);
    A.printArray();
}

void testAddArray()
{
    cout << "\nTest add array:\n" << endl;
    Array A;
    A.addElement(1);
    A.addElement(4);
    A.printArray();
    int a[] = {0, 3};
    A.addArray(a, sizeof(a)/sizeof(a[0]));
    A.printArray();
}

void testAddition()
{
    cout << "\nTest addition:\n" << endl;
    Array A1;
    Array A2;
    A1.addElement(5);
    A1.addElement(-7);
    A1.printArray();
    A2.addElement(2);
    A2.addElement(0);
    A2.addElement(1);
    A2.printArray();
    A1.addition(A2);
    A1.printArray();
}

void testDeleteByIndex()
{
    cout << "\nTest delete element by index:\n" << endl;
    Array A;
    A.addElement(6);
    A.addElement(10);
    A.addElement(-4);
    A.printArray();
    A.deleteByIndex(1);
    A.printArray();
}

void testDeleteByValue()
{
    cout << "\nTest delete element by value:\n" << endl;
    Array A6;
    A6.addElement(10);
    A6.addElement(0);
    A6.addElement(-4);
    A6.addElement(10);
    A6.addElement(8);
    A6.printArray();
    A6.deleteByValue(10);
    A6.printArray();
}
