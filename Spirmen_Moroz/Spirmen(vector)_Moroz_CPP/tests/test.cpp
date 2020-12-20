#include "test.h"

void runTest()
{
    testAddElement();

    testAddArray();

    testAddition();

    testDeleteByIndex();

    testDeleteByValue();

    testIntersection();

    testDifference();
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
    vector<int> a = {1,2,0};
    Array A(a);
    A.printArray();
    vector<int> b = {2,4};
    A.addArray(b);
    A.printArray();
}

void testAddition()
{
    cout << "\nTest addition:\n" << endl;
    Array A1(2);
    A1.addElement(8);
    A1.printArray();
    vector<int> a = {1,2,0};
    Array A2(a);
    A2.printArray();
    Array A3;
    A3 = A1 + A2;
    A3.printArray();
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
    Array A;
    A.addElement(10);
    A.addElement(0);
    A.addElement(-4);
    A.addElement(10);
    A.addElement(8);
    A.printArray();
    A.deleteByValue(10);
    A.printArray();
}

void testIntersection()
{
    cout << "\nTest intersection array:\n" << endl;
    Array A1;
    A1.addElement(2);
    A1.addElement(0);
    A1.addElement(2);
    A1.addElement(-1);
    A1.addElement(4);
    A1.printArray();
    Array A2;
    A2.addElement(6);
    A2.addElement(9);
    A2.addElement(2);
    A2.addElement(4);
    A2.addElement(10);
    A2.printArray();
    Array A3;
    A3 = A1 * A2;
    A3.printArray();
}

void testDifference()
{
    cout << "\nTest difference array:\n" << endl;
    Array A1;
    A1.addElement(2);
    A1.addElement(0);
    A1.addElement(2);
    A1.addElement(-1);
    A1.addElement(4);
    A1.printArray();
    Array A2;
    A2.addElement(6);
    A2.addElement(9);
    A2.addElement(2);
    A2.addElement(4);
    A2.addElement(10);
    A2.printArray();
    Array A3;
    A3 = A1 - A2;
    A3.printArray();
}
