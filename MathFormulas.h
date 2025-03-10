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
};
