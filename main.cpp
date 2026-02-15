#include "fraction.h"
#include <iostream>
using namespace std;

int main() {
    Fraction a, b, res;
    int choice;

    cout << "КАЛЬКУЛЯТОР ДРОБЕЙ \n";

    cout << "\nПервая дробь:\n";
    a.input();

    cout << "\nВторая дробь:\n";
    b.input();

    cout << "\n1. Сложение\n2. Вычитание\n3. Умножение\n4. Деление\n";
    cout << "Выбери: ";
    cin >> choice;

    cout << "\n";
    a.display();

    switch(choice) {
        case 1: cout << " + "; res = a.add(b); 
        break;
        case 2: cout << " - "; res = a.subtract(b); 
        break;
        case 3: cout << " * "; res = a.multiply(b); 
        break;
        case 4: cout << " / "; res = a.divide(b); 
        break;
        default: cout << "? Неправильно\n"; 
        return 1;
    }

    b.display();
    cout << " = ";
    res.display();
    cout << "\n";

    return 0;
}