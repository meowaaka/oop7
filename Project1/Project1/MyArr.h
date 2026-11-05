#pragma once
#include <iostream>
using namespace std;

template<class T1, class T2>
class Person
{
    T1 first;
    T2 second;
    double* grades;

public:
    Person(T1 a, T2 b);
    void Init(T1 a, T2 b);
    void Print();
    ~Person();

    T1 GetFirst();
    void SetFirst(T1 value);
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 a, T2 b)
{
    grades = new double[5] {12, 10, 11, 9, 8};

    first = a;
    second = b;
}

template<class T1, class T2>
void Person<T1, T2>::Init(T1 a, T2 b)
{
    first = a;
    second = b;
}

template<class T1, class T2>
void Person<T1, T2>::Print()
{
    cout << "First: " << first
        << ", Second: " << second
        << "\nGrades: ";

    for (int i = 0; i < 5; i++)
        cout << grades[i] << " ";

    cout << "\n\n";
}

template<class T1, class T2>
Person<T1, T2>::~Person()
{
    delete[] grades;
}

template<class T1, class T2>
T1 Person<T1, T2>::GetFirst()
{
    return first;
}

template<class T1, class T2>
void Person<T1, T2>::SetFirst(T1 value)
{
    first = value;
}