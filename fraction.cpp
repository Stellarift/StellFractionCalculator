#include "fraction.h"
#include <iostream>
using namespace std;

Fraction::Fraction() {
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(int num, int den) {
    numerator = num;
    denominator = den;
}

void Fraction::input() {
    cout << "Введите числитель: ";
    cin >> numerator;
    cout << "Введите знаменатель: ";
    cin >> denominator;
}

void Fraction::display() {
    cout << numerator << "/" << denominator;
}

Fraction Fraction::add(Fraction f) {
    Fraction res;
    res.numerator = numerator * f.denominator + f.numerator * denominator;
    res.denominator = denominator * f.denominator;
    return res;
}

Fraction Fraction::subtract(Fraction f) {
    Fraction res;
    res.numerator = numerator * f.denominator - f.numerator * denominator;
    res.denominator = denominator * f.denominator;
    return res;
}

Fraction Fraction::multiply(Fraction f) {
    Fraction res;
    res.numerator = numerator * f.numerator;
    res.denominator = denominator * f.denominator;
    return res;
}

Fraction Fraction::divide(Fraction f) {
    Fraction res;
    res.numerator = numerator * f.denominator;
    res.denominator = denominator * f.numerator;
    return res;
}