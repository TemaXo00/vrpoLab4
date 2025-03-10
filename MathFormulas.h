#pragma once

class Calculator {
private:
    int firstNum, secondNum;
public:
    void print() {
        using namespace std;
        cout << "Введите первое значение:";
        cin >> firstNum;
        cout << "Введите второе значение:";
        cin >> secondNum;
    }

    void summ() {
        printf("\nСложение: %d",firstNum+secondNum);
    }
    void minus() {
        printf("\nВычитание: %d",firstNum-secondNum);
    }
    void umn() {
        printf("\nУмножение: %d",firstNum*secondNum);
    }
    void del() {
        printf("\nДеление: %d",firstNum/secondNum);
    }
    void modN() {
        printf("\nОстаток при делении числа %d на число %d равен: %d", firstNum, secondNum, firstNum%secondNum);
    }
    void powF() {
        int bufN=firstNum;
        for (int i=1; i<secondNum; i++)
            bufN*=firstNum;
        printf("\nИтог возведения числа %d в степень %d равен: %d", firstNum, secondNum, bufN);
    }
};
