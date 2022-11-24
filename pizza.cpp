#include <iostream>
#include "pizza.h"

using namespace std;

pizza::pizza() {
    this->pizza_type = "type";
    this->pizza_price = 0;
    this->pizza_diameter = 0;
}

pizza::~pizza(){

};

void pizza::input() {
    cout<<"Введите вид пиццы: ";
    cin>>pizza_type;
    cout<<"Введите диаметр пиццы: ";
    cin>>pizza_diameter;
    cout<<"Введите цену пиццы: ";
    cin>>pizza_price;
}

void pizza::output() {
    cout<<"Вид пиццы: "<< pizza_type << " Диаметр пиццы: " << pizza_diameter << " Цена пиццы: " << pizza_price << endl;
}

