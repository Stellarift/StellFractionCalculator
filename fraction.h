#pragma once
#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction();
    Fraction(int num, int den);
    void input();
    void display();
    Fraction add(Fraction f);
    Fraction subtract(Fraction f);
    Fraction multiply(Fraction f);
    Fraction divide(Fraction f);
};

#endif