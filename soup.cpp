#include <iostream>
#include "soup.h"

using namespace std;

soup::soup() {
    this->soup_type = "type";
    this->soup_price = 0;
}

soup::~soup() = default;

void soup::input() {
    cout<<"Введите вид суп: ";
    cin>>soup_type;
    cout<<"Введите цену супа: ";
    cin>>soup_price;
}

void soup::output() {
    cout<<"Вид супа: "<< soup_type << " Цена супа: " << soup_price << endl;
}

