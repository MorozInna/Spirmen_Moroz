#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include <iostream>

using namespace std;

// ���� Array
class Array
{
protected:
    // �������� arr (�� ����� ����� �����)
    int *arr;
    // ������� ������
    int length;
public:
    // ����������� ����� Array (������ ���'��� �� ����� ����� �����)
    Array();
    // ����������� ����� Array � ���������� ������ ��������
    Array(int element);

    // ����������� ����� Array � ���������� ������ ��������
    Array(int *a, int n);

    // ���������� ����� Array (������� ������� ���'��� �� ����� ����� �����)
    ~Array();

    // ����� ��������� ������
    void printArray();

    // ����� ��������� ������ ��������
    void addElement(int element);

    // ����� ��������� ������ ��������
    void addArray(int *a, int n);

    // ����� ��������� ���� ������
    void addition(Array arr1);

    // ����� ��������� �������� �� �������
    void deleteByIndex(int i);

    // ����� ��������� �������� �� ���������
    void deleteByValue(int a);
};

#endif // ARRAY_H_INCLUDED
