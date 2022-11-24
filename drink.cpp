#include <iostream>
#include "drink.h"

using namespace std;

drink::drink() {
    this->drink_type = "type";
    this->drink_price = 0;
    this->drink_volume = 0;
}

drink::~drink() = default;

void drink::input() {
    cout<<"Введите вид напитка: ";
    cin>>drink_type;
    cout<<"Введите объем напитка: ";
    cin>>drink_volume;
    cout<<"Введите цену напитка: ";
    cin>>drink_price;
}

void drink::output() {
    cout<<"Вид напитка: "<< drink_type << " Объем напитка: " << drink_volume << " Цена напитка: " << drink_price << endl;
}

