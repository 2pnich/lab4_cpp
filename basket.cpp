#include <iostream>
#include "basket.h"
#include <ctime>

basket::basket(shaurma _shaurma, pizza _pizza, drink _drink, soup _soup, fries _fries) {
    this->_shaurma = _shaurma;
    this->_pizza = _pizza;
    this->_drink = _drink;
    this->_soup = _soup;
    this->_fries = _fries;
}

basket::basket(shaurma _shaurma) {
    this->_shaurma = _shaurma;
}

basket::basket() {

}

basket::~basket() {

}

void basket::input() {
    _shaurma.input();
    _pizza.input();
    _drink.input();
    _soup.input();
    _fries.input();
}

void basket::output() {
    _shaurma.output();
    _pizza.output();
    _drink.output();
    _soup.output();
    _fries.output();
}

void basket::sum(basket p, float &sum1) {
    sum1 = p._shaurma.sh_price+p._pizza.pizza_price+p._drink.drink_price+p._soup.soup_price+p._fries.fries_price;
}

void basket::sum(basket p, float *sum2) {
    *sum2 = p._shaurma.sh_price + p._pizza.pizza_price + p._drink.drink_price + p._soup.soup_price + p._fries.fries_price;
}

void basket::payment(float sum){
    int way, chance;
    float money, change;
    cout << "Выерите способ оплаты карта/наличные 1/2" << endl;
    cin >> way;
    if (way == 1) {
        srand(time(NULL));
        chance = rand() % 2 + 1;
        if (chance == 1)
            cout << "Отлично! Оплата прошла";
        if (chance == 2)
            cout << "Не хватает средств";
    }
    if (way == 2) {
        cout <<"Введите полученную от покупателя сумму" << endl;
        cin >> money;
        change = money - sum;
        if (change > 0)
            cout << "Сдача: " << change << endl;
        if (change < 0)
            cout << "Нужно добавить: " << abs(change) << endl;
        if (change == 0)
            cout << "Без сдачи";
    }
}

//ДРУЖЕСТВЕННАЯ ФУНКЦИЯ//
void pos(basket &a) {
    cout << "Количество позиций: " << a.positions << endl;
}
