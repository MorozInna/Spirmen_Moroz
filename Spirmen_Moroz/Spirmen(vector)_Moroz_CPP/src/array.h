#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include <iostream>
#include <vector>

using namespace std;

// ���� Array
class Array
{
protected:
    // ���� arr (vector) - ����� ����� �����
    vector<int> arr;
public:
    // ����������� ����� Array
    Array(){}

    // ����������� ����� Array � ���������� ������ ��������
    Array(int element);

    // ����������� ����� Array � ���������� ������ ��������
    Array(vector<int> a);

    // ���������� ����� Array
    ~Array(){}

    // ����� ��������� ������
    void printArray();

    // ����� ��������� ������ ��������
    void addElement(int element);

    // ����� ��������� ������ ��������
    void addArray(vector<int> a);

    // �������������� �������� ��������� - ���� ��� �����
    Array operator+(const Array & arr1);

    // ����� ��������� �������� �� �������
    void deleteByIndex(int i);

    // ����� ��������� �������� �� ���������
    void deleteByValue(int a);

    // �������������� �������� �������� - ������ ������� �� �������� ���� ������
    Array operator*(const Array & arr1);

    // �������������� �������� �������� - ������ ������ �� ��������� ��������
    Array operator-(const Array & arr2);
};

#endif // ARRAY_H_INCLUDED
