#ifndef LAB_2_2_DRINK_H
#define LAB_2_2_DRINK_H

using namespace std;

class drink {
public:
    float drink_price;
    float drink_volume;
    string drink_type;
    drink();
    ~drink();
    void input();
    void output();
};
#endif //LAB_2_2_DRINK_H
