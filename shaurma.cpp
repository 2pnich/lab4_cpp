#include <iostream>
#include "shaurma.h"

using namespace std;

shaurma::shaurma() {
    this->sh_type = "type";
    this->sh_price = 0;
    this->sh_weight = 0;
}

shaurma::~shaurma(){

};

void shaurma::input() {
    cout<<"Введите вид шаурмы: ";
    cin>>sh_type;
    cout<<"Введите вес шаурмы: ";
    cin>>sh_weight;
    cout<<"Введите цену шаурмы: ";
    cin>>sh_price;
}

void shaurma::output() {
    cout<<"\nВид шаурмы: "<< sh_type << " Вес шаурмы: " << sh_weight << " Цена шаурмы: " << sh_price << endl;
}