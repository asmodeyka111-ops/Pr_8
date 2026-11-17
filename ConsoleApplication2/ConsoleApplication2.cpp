#include <iostream>

using namespace std;

// Функция проверки, является ли число шестизначным
bool isSixDigit(int number) {
    return (number >= 100000 && number <= 999999);
}

// Функция вычисления суммы первых трёх цифр
int sumFirstThree(int number) {
    int n1 = number / 100000;          // Первая
    int n2 = (number / 10000) % 10;    // Вторая
    int n3 = (number / 1000) % 10;     // Третья
    return n1 + n2 + n3;
}

// Функция вычисления суммы последних трёх цифр
int sumLastThree(int number) {
    int n4 = (number / 100) % 10;      // Четвертая
    int n5 = (number / 10) % 10;       // Пятая
    int n6 = number % 10;              // Шестая
    return n4 + n5 + n6;
}

// Функция проверки "счастливости"
bool isLucky(int number) {
    return sumFirstThree(number) == sumLastThree(number);
}

int main() {
    setlocale (LC_ALL, "rus");
    int number;

    cout << "Введите шестизначное число: ";
    cin >> number;

    if (isSixDigit(number)) {
        if (isLucky(number)) {
            cout << "Это счастливое число!" << endl;
        }
        else {
            cout << "Число не является счастливым." << endl;
        }
    }
    else {
        cout << "Ошибка: число должно быть строго шестизначным." << endl;
    }

    return 0;
}
