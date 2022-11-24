#ifndef LAB_2_2_PIZZA_H
#define LAB_2_2_PIZZA_H
using namespace std;

class pizza {
public:
    float pizza_price;
    float pizza_diameter;
    string pizza_type;
    pizza();
    ~pizza();
    void input();
    void output();
};

#endif //LAB_2_2_PIZZA_H
