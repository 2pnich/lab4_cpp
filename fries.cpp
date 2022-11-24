#include <iostream>
#include "fries.h"

using namespace std;

fries::fries() {
    this->fries_type = "type";
    this->fries_quantity = 0;
    this->fries_price = 0;
}

fries::~fries() = default;

void fries::input() {
    cout<<"Введите вид фри: ";
    cin>>fries_type;
    cout<<"Введите цену фри: ";
    cin>>fries_price;
    cout<<"Введите количество фри: ";
    cin>>fries_quantity;

}

void fries::output() {
    cout<<"Вид фри: "<< fries_type << " Количество: " << fries_quantity << " Цена фри: " << fries_price << endl;
}

