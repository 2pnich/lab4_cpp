#ifndef LAB_2_2_FRIES_H
#define LAB_2_2_FRIES_H

using namespace std;

class fries {
public:
    float fries_price;
    float fries_quantity;
    string fries_type;
    fries();
    ~fries();
    void input();
    void output();
};

#endif //LAB_2_2_FRIES_H
