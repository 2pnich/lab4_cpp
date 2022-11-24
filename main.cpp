#include <iostream>
#include "shaurma.h"
#include "pizza.h"
#include "drink.h"
#include "soup.h"
#include "fries.h"
#include "basket.h"
#include <windows.h>
using namespace std;

//ПЕРЕГРУЗКА +//
class overload_plus {
private:
    int min,sec;
public:
    void Init(int m,int s);
    overload_plus operator+ (overload_plus b);
};

void overload_plus::Init(int m,int s) {
    min=m;
    sec=s;
}

overload_plus overload_plus::operator+(overload_plus b) {
    overload_plus c;
    c.min=this->min+b.min;
    c.sec=this->sec+b.sec;
    if(c.sec>=60) {
        c.min++;
        c.sec -= 60;
    }
    return c;
}
////////////
///ПЕРЕГРУЗКА ++/////
class overload_plusplus {
private:
    int min,sec;
public:
    void Init(int m,int s);
    overload_plusplus & operator ++();
    overload_plusplus operator ++(int unused);
};

void overload_plusplus::Init(int m,int s) {
    min=m;
    sec=s;
}

overload_plusplus & overload_plusplus::operator ++() { //ПРЕФИКС
    this-> min++;
    return *this;
}

overload_plusplus overload_plusplus::operator++(int unused) { //ПОСТФИКС
    overload_plusplus c = *this;
    ++*this;
    return c;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    float summ1, summ2;
    //ПЕРЕГРУЗКА++//
    overload_plusplus a,b;
    a.Init(2,35);
    b=++a;       //a: min=3 sec=35  b: min=3 sec=35
    printf("Pref=%d\n", b);
    a.Init(2,35);
    b=a++;       //a: min=3 sec=35 b: min=2 sec=35
    printf("Postf=%d", b);
    ////////////////
    //ПЕРЕГРУЗКА +//
    overload_plus ap, bp, cp, dp;
    ap.Init(2,25);
    bp.Init(2,45);
    cp.Init(3,5);
    dp = ap + bp + cp;  //  d: min = 8 sec = 15
    printf("\nD=%d\n", dp);
    ////////////////

    shaurma _shaurma = shaurma();
    pizza _pizza = pizza();
    drink _drink = drink();
    soup _soup = soup();
    fries _fries = fries();

    basket *order = new basket[2];
    //ДРУЖЕСТВЕННАЯ ФУНКЦИЯ//
    pos(*order);
    ////////////////
    order[0] = basket(_shaurma, _pizza, _drink, _soup, _fries);
    order[0].input();
    order[0].output();
    //УКАЗАТЕЛЬ//
    basket::sum(*order, &summ1);
    cout<< "Итог(сумма через указатель): " << summ1 << endl;
    basket::sum(*order, summ2);
    //ПАРАМЕТР//
    cout<< "Итог(через параметр): " << summ2 << endl;
    basket::payment(summ1);
    delete[] order;
}
