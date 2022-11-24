#ifndef LAB_2_2_BASKET_H
#define LAB_2_2_BASKET_H
#include <iostream>
#include "shaurma.h"
#include "pizza.h"
#include "drink.h"
#include "soup.h"
#include "fries.h"

class basket {
    friend void pos(basket &a);
private:
    shaurma _shaurma;
    pizza _pizza;
    drink _drink;
    soup _soup;
    fries _fries;
    int positions = 5;
public:
    basket(shaurma _shaurma, pizza _pizza, drink _drink, soup _soup, fries _fries);
    basket(shaurma _shaurma);
    basket();
    ~basket();
    void input();
    void output();
    static void payment(float sum);
    public: static void sum(basket p, float &sum);
    static void sum(basket p, float *sum);
};


#endif //LAB_2_2_BASKET_H
